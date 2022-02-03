# ledcontrol
**Do it simple - Control the status LEDs of your Raspberry Pi!**
**By Strawberry Software**

## What is ledcontrol?
ledcontrol is a program which was developed especially for the Raspberry Pi. With the help of this program you can easily turn on or off the status leds of your Raspberry Pi. Or even let them blink in different rythm!

## How does it work?
ledcontrol was written in C. Using the system() function we can change the LED GPIO map more easily than you think. 

## How can I install ledcontrol?
Go to our release page ([Click here](https://github.com/Strawberry-Software-Industries/ledcontrol/releases)) and download the latest build. We currently only provide arm64 executables, but we will work on creating armhf executables.

## Supported Platforms
To start ledcontrol, all you need to do is download the executable. Just execute it and you will get a help menu. <br>
The important thing is that you need a Linux distribution that has `/sys/class/leds/ledx`
Otherwise ledcontrol will not work
