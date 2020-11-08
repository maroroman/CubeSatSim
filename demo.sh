#!/bin/bash

echo -e "\nDemo of CubeSatSim at 434.9 MHz\n"

sudo systemctl restart rpitx

if [ "$1" = "a" ]; then
   	echo "Mode is continuous AFSK"
    	/home/pi/CubeSatSim/radioafsk afsk
elif [ "$1" = "b" ]; then
   	echo "Mode is continuous BPSK"  
    	/home/pi/CubeSatSim/radioafsk bpsk
elif [ "$1" = "s" ]; then
   	echo "Mode is continuous SSTV"  
    	while true; do sleep 5; done
elif [ "$1" = "f" ]; then
    echo "Mode is continuous FSK"
    /home/pi/CubeSatSim/radioafsk fsk
else
    echo "Mode cycling"
    y=$(last reboot | grep ^reboot | wc -l)
    echo $y
    echo $(($y % 4))
    
      if [ $(($y % 4)) = 0 ]; then
   	   echo "Mode is continuous AFSK"
    	   /home/pi/CubeSatSim/radioafsk afsk
      elif [ $(($y % 4)) = 1 ]; then
   	   echo "Mode is continuous BPSK"  
    	   /home/pi/CubeSatSim/radioafsk bpsk
      elif [ $(($y % 4)) = 2 ]; then
   	   echo "Mode is continuous SSTV"  
    	   while true; do sleep 5; done
      else
         echo "Mode is continuous FSK"
         /home/pi/CubeSatSim/radioafsk fsk  
      fi
fi
