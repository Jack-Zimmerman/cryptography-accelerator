import pyfiglet
import time

RED = "\033[91m"
RESET = "\033[0m"
BLUE = "\033[36m"
GREEN = "\033[32m"

def print_jz_miner():

    ascii_banner = pyfiglet.figlet_format("JZ Miner")
    print(RED + ascii_banner + RESET)

def print_version_info():
    print(RED + "Version: 0.1 | Created: 5/28/2025 | Author: Jack Zimmerman" + RESET)

def print_bar():
    print("-" * 75)

    
def print_header():
    print_jz_miner()
    print_version_info()
    print_bar()

    print("Loading target info...")

    time.sleep(1)
    
    print("Target: AMD Spartan-7 XC7S50-CGSA324")
    print("Serving/Recieving data on serial port COM8")
    