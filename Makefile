CFLAGS=-Wall -std=c99

astro_trivia: questions.o main.o
	gcc $(CFLAGS) questions.o main.o -o astro_trivia

main.o: main.c
	gcc $(CFLAGS) -c main.c

questions.o: questions.c questions.h
	gcc $(CFLAGS) -c questions.c

clean:
	rm -f *.o astro_trivia
