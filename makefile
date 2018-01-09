all: main.o he.o
	    gcc main.o he.o -o target_bin
main.o: main.c he.h
	    gcc -I /home/inxs/proj/src -c main.c
he.o: he.c he.h
	    gcc -I /home/inxs/proj/src -c he.c
clean:
	    rm -rf *.o
	    rm target_bin

