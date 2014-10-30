obj-m += simple_two.o
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	modinfo simple_two.ko
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

