#!/usr/bin/env python3

import time
import board
import busio
import adafruit_veml7700

i2c = busio.I2C(board.SCL, board.SDA)
veml7700 = adafruit_veml7700.VEML7700(i2c)

while True:
        print("Light: ", veml7700.light)
        time.sleep(1)