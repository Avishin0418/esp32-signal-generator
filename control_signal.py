import serial
import time

port = 'COM3'  # Update to your port
baud = 115200
ser = serial.Serial(port, baud, timeout=1)
time.sleep(2)  # wait for ESP32

while True:
    freq = input("Enter frequency (Hz): ")
    ser.write((freq + '\n').encode())
    print("Sent frequency:", freq)
