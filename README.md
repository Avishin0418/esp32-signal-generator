# ESP32 Signal Generator

This project uses an ESP32 microcontroller to generate square wave signals on a GPIO pin. Frequency can be controlled in real time via a Python script over the serial port.

## Features

✅ Square wave output on pin 25  
✅ Adjustable frequency over Serial  
✅ Python control script  

## How to Use

1. Flash `esp32_signal_generator.ino` to your ESP32 using Arduino IDE  
2. Connect ESP32 to your computer via USB  
3. Run `control_signal.py` and input desired frequencies  

## Requirements

- ESP32 DevKit  
- Arduino IDE  
- Python 3 + pyserial (`pip install pyserial`)
