all:
	$(clean)
	$(install)

arm64:
	gcc -Wall *.h *.c include/*.h led1/*.h led1/*.c -o led0/*.h led0/*.c leds/*.c leds/*.h -o build/ledcontrol-arm64

armhf:
	arm-linux-gnueabi-gcc -Wall *.h *.c include/*.h led1/*.h led1/*.c -o led0/*.h led0/*.c leds/*.c leds/*.h -o build/ledcontrol-arhf

install:
	$(build)
	sudo cp ./ledcontrol /usr/bin/

uninstall:
	$(build)
	sudo rm /usr/bin/ledcontrol

update:
	$(clean)
	$(build)
	$(uninstall)
	$(install)
	
run:
	$(build)
	./ledcontrol

clean:
	rm ledcontrol
