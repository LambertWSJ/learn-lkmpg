# obj-m += hello-1.o 
# obj-m += hello-2.o 
module = hello-5
obj-m += $(module).o
 
PWD := $(CURDIR) 
 
all: 
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules 
 
clean: 
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

load:
	sudo insmod $(module).ko
remove:
	sudo rmmod $(module).ko
log:
	sudo journalctl --since "1 hour ago" | grep kernel