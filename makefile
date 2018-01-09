all: main.o he.o
	    gcc main.o he.o -o target_bin
main.o: main.c he.h
	    gcc -I/home/inxs/proj/header/ -c src/main.c

he.o: he.c he.h
	    gcc -I/home/inxs/proj/header/ -c src/he.c
clean:
	    rm -rf *.o
	    rm target_bin



