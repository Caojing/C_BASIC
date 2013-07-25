math:main.c
	sudo mv math.h /usr/include/
	gcc main.c -L.. -lmymath -o math
	sudo mv main.c /usr/bin/libmymath.so 
clean:
	@echo "clean begin"
	-rm *.o
	@echo "clean ok"
