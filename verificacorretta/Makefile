all: main

main: main.o pow.o math.o
	gcc -o calc main.o pow.o math.o

main.o: main.c pow.h math.h
	gcc -c -o main.o main.c

pow.o: pow.c pow.h
	gcc -c -o pow.o pow.c

math.o: math.c math.h
	gcc -c -o math.o math.c

clean: main.o pow.o math.o
	rm -rf calc main.o pow.o math.o