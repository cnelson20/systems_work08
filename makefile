all: mystring

mystring: main.o mystring.o
	gcc -o strmanip main.o mystring.o

mystring.o: mystring.c mystring.h
	gcc -c mystring.c

main.o:	main.c mystring.h
	gcc -c main.c
	
run:
	./strmanip