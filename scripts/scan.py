from serial.tools import list_ports_windows

ports_open = list_ports_windows.comports()

for port in ports_open:
    print(port.device)