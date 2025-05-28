import serial
from serial.tools import list_ports_windows
import hashlib

BLOCK = "00000000000000006020cb85ba559c6860e289bb5810b506baaebaa8b081e6090b000000000000000000d551340e54c3a6a3723ca22c135fbbf4bed2bab710275685d751af00335d7d856d616260"


ser = serial.Serial(port="COM8", baudrate=500000, bytesize=8, parity=serial.PARITY_NONE, stopbits=serial.STOPBITS_ONE)


def write_block(ser, block):
    print("writing")
    ser.write(bytes.fromhex(block)[::-1])

if __name__ == "__main__": 
    write_block(ser, BLOCK)

    try:
        print("reading")
        block = ""
        for i in range(8):
            value = ser.read(1)
            valuestr = int.from_bytes(value, 'little')
            
            print(hex(valuestr))
            if i % 2 == 1:
                if (len(hex(valuestr)) == 3):
                    block = "0" + hex(valuestr).removeprefix("0x") + block
                else:
                    block = hex(valuestr).removeprefix("0x") + block
        
    except KeyboardInterrupt:
        pass
    