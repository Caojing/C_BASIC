#libmymath.so:=add.o
#libmymath.so+=$(qaz)
#qaz=sub.o mul.o dev.o
libmymath.so:add.c sub.c mul.c dev.c
	gcc -fPIC $^ -shared -o $@
install:libmymath.so
	sudo mv libmymath.so /usr/bin
#math:main.o add.o sub.o mul.o dev.o 
#	gcc $^ -o $@
clean:
	@echo "clean project"
	-rm math *.o
	@echo "clean ok"
.PHONY:clean
