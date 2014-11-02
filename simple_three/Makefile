obj-m += simple_three.o
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	modinfo simple_three.ko
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

