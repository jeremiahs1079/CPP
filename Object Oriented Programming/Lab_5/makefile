all: lab5

lab5: arrayfunctions.o lab5.o
	gcc -o lab5 arrayfunctions.o lab5.o

lab5.o: lab5.c arrayfunctions.h
	gcc -c lab5.c

arrayfunctions.o: arrayfunctions.c arrayfunctions.h
	gcc -c arrayfunctions.c

clean:
	rm -rf *.o