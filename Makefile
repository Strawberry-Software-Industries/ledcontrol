all:
	$(clean)
	$(install)

build:
	gcc -Wall *.h *.c include/*.h led1/*.h led1/*.c -o led0/*.h led0/*.c -o ledcontrol

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
