libmymath.so:add.c sub.c mul.c dev.c 
	gcc -fPIC $^ -shared -o $@
install:libmymath.so
	sudo mv libmymath.so /usr/lib/
clean:
	@echo "clean start"
	-rm *.o
	@echo "clean ok"	
