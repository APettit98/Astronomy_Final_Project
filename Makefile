CFLAGS=-w -std=c99

astro_trivia: game.o questions.o main.o
	gcc $(CFLAGS) game.o questions.o main.o -o astro_trivia

main.o: main.c
	gcc $(CFLAGS) -c main.c

questions.o: questions.c questions.h
	gcc $(CFLAGS) -c questions.c

game.o: game.c game.h
	gcc $(CFLAGS) -c game.c

clean:
	rm -f *.o astro_trivia
