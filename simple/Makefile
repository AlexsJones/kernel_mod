obj-m += simple_one.o
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	modinfo simple_one.ko
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

