output: main.o mokoko.o
	gcc main.o mokoko.o -o output

main.o: main.c
	gcc -c main.c

mokoko.o: mokoko.c mokoko.h
	gcc -c mokoko.c

clean:
	rm *.o output