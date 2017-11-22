

obj-m += rpmsg_neo.o
rpmsg_neo-objs:= rpmsg_init_neo.o rpmsg_neo_tty.o rpmsg_ethernet.o rpmsg_neoproxy.o

KDIR  := /home/user/work/imx6/linux-imx
PWD   := $(shell pwd)

default:
	$(MAKE) -C $(KDIR) M=$(PWD) modules
	
	
	
clean:
	rm -f .tmp
	rm -f *.o*
	rm -f Mo*
	rm -f *.cmd
	rm -f mccmulti.mod*
	rm -fr .t* .mcc*
	rm -f *.ko
	rm -f *.mod.*
	rm -f *~
	rm -f .*

