all: strmanip

mystring: strmanip.o
	gcc -o strmanip strmanip.o

mystring.o: mystring.c mystring.h
	gcc -c mystring.c

main.o:	main.c mystring.h
	gcc -c main.c
	
