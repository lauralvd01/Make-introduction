# makefile TD
# in terminal write "make" to compile" and "./prog" to execute.
# write "make clean" to remove executable and .o files.

all : prog


prog : date.o main.o
	gcc -o prog date.o main.o

TD22Function.o : date.c
	gcc -c date.c

TD22.o : main.c
	gcc -c main.c

clean : 
	rm -f prog *.o

