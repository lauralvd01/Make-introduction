# makefile TD22
all : prog


prog : TD22Function.o TD22.o
	gcc -o prog TD22Function.o TD22.o

TD22Function.o : TD22Function.c
	gcc -c TD22Function.c

TD22.o : TD22.c
	gcc -c TD22.c

clean : 
	rm -f prog *.o

