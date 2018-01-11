all: main2.o he2.o
	 gcc main2.o he2.o -o target_bin -lpthread
main2.o: src/main2.c header/he.h
	 gcc -I/home/inxs/proj/header/ -c src/main2.c -lpthread

he2.o: src/he2.c header/he.h
	 gcc -I/home/inxs/proj/header/ -c src/he2.c -lpthread
clear:	   
	 rm -rf *.o
	 rm target_bin


