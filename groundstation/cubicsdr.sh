#!/bin/bash
# script to run OpenWebRX SDR

echo "Script to run CubicSDR for ARISS Radio Pi"

echo 

echo "Note: Select Generic RTL2832 device then click Start to begin"

echo

sudo systemctl stop openwebrx

sudo killall -9 java &>/dev/null

sudo killall -9 rtl_fm &>/dev/null

sudo killall -9 qsstv &>/dev/null

sudo systemctl stop rtl_tcp

sudo killall -9 rtl_tcp &>/dev/null

sleep 5

CubicSDR

$SHELL
