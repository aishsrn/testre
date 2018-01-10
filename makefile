all: main.o he.o
	 gcc main.o he.o -o target_bin
main.o: src/main.c header/he.h
	 gcc -I/home/inxs/proj/header/ -c src/main.c

he.o: src/he.c header/he.h
	 gcc -I/home/inxs/proj/header/ -c src/he.c
clear:	   
	 rm -rf *.o
	    rm target_bin



