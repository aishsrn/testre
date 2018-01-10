all: main.o he.o
	 gcc main.o he.o -o target_bin
main.o: 
	 gcc -I/home/inxs/proj/header/ -c src/main.c

he.o: 
	 gcc -I/home/inxs/proj/header/ -c src/he.c
clear:	   
	 rm -rf *.o
	    rm target_bin



