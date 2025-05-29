import serial
import console
import blockchain
from serial.tools import list_ports_windows
import hashlib
import time

EXAMPLE_BLOCK = "0006020cb85ba559c6860e289bb5810b506baaebaa8b081e6090b000000000000000000d551340e54c3a6a3723ca22c135fbbf4bed2bab710275685d751af00335d7d856d6162606fdf0c170"
NONCES_PER_SECOND = 4500000 #the amount of nonces the miner goes through in a second on average
HASH_CORES = 10
MINER_CLOCK_CYCLE = 100_000_000
CLOCKS_PER_HASH = 220 / HASH_CORES

cycles_passed = 0


ser = serial.Serial(port="COM8", baudrate=500000, bytesize=8, parity=serial.PARITY_NONE, stopbits=serial.STOPBITS_ONE, timeout=1)

def double_sha256(hex_str):
    try:
        # Convert hex string to bytes
        data = bytes.fromhex(hex_str)
    except ValueError:
        return "Invalid hex string"

    # First SHA-256 hash
    first_hash = hashlib.sha256(data).digest()
    # Second SHA-256 hash
    second_hash = hashlib.sha256(first_hash).hexdigest()

    return second_hash

#run internal benchmark, returns in kilohash
def benchmark():
    
    start_ms = time.perf_counter_ns() / 1_000_000
    for _ in range(100000):
        double_sha256(EXAMPLE_BLOCK)
    end_ms = time.perf_counter_ns() / 1_000_000

    seconds_passed = (end_ms - start_ms) / 1000
    hashrate = 100000 / seconds_passed

    return round(hashrate / 1_000_000, 2)

def get_fpga_hashrate(): #get hashrate in MH/s
    raw_hashrate = MINER_CLOCK_CYCLE / CLOCKS_PER_HASH
    
    return round(raw_hashrate / 1_000_000, 2)

def show_host_benchmark():
    console.print_bar()
    print("Running host computer benchmark...")
    hashrate = benchmark()
    print(f"Host computer hashrate: {hashrate} MH/s")

def show_fpga_benchmark():
    console.print_bar()
    print("Running FPGA benchmark...")
    time.sleep(1)
    print(f"FPGA clock speed: 100 MHz")
    print(f"Hash cores: 10")
    print(f"FPGA Hashrate: {console.BLUE} {get_fpga_hashrate()} {console.RESET} MH/s")


    
def count_leading_zeroes(s):
    count = 0
    for char in s:
        if char == '0':
            count += 1
        else:
            break
    return count

def get_historial_hashrate(best_hash, seconds_passed):
    difficulty = 16 ** count_leading_zeroes(best_hash)
    
    return round(difficulty / 100_000 / seconds_passed, 3)

def write_block(ser, block):
    ba = bytearray.fromhex(block)
    ba = ba[::-1]

    ser.write(ba)

def read_result_hash(ser):
    result_hash = ""
    
    ser.read(1)
    for i in range(64):
        hex_byte = hex(int.from_bytes(ser.read(1), 'little')).removeprefix("0x")

        #pad with zero
        if len(hex_byte) == 1:
            hex_byte = "0" + hex_byte

        #skip first redundancy byte
        if (i % 2 == 0):
            result_hash = result_hash + hex_byte
    
    ser.flushInput()
    return result_hash


def deploy_and_read_share(ser, block): 
    write_block(ser, block)
    result = read_result_hash(ser)
 
    return result


def do_cycle(ser, block):
    result = deploy_and_read_share(ser, block)
    
    print(f"Current best share: {console.GREEN}{result}{console.RESET}") 
    print(f"Historial hashrate: {console.BLUE}{get_historial_hashrate(result, cycles_passed)}{console.RESET} MH/s")
    

if __name__ == "__main__": 
    console.print_header()
    show_host_benchmark()
    show_fpga_benchmark()
    
    current_header = EXAMPLE_BLOCK
    
    try:
        while True:
            cycles_passed += 1

            if (cycles_passed % 50 == 0):
                console.print_bar() 
                current_header = EXAMPLE_BLOCK
                print(f"Working on header: {EXAMPLE_BLOCK}")
            
            do_cycle(ser, current_header)

    except KeyboardInterrupt: 
        print("Goodbye...")