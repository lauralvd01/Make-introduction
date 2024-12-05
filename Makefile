# makefile TD
# in terminal write "make" to compile" and "./prog" to execute.
# write "make clean" to remove executable and .o files.

all : prog


prog : date.o main.o person.o list.o
	gcc -o prog date.o main.o person.o list.o

date.o : date.c 
	gcc -c date.c

main.o : main.c
	gcc -c main.c

person.o : person.c
	gcc -c person.c

list.o : list.c
	gcc -c list.c

clean : 
	rm -f prog *.o

run : 	
	./prog
