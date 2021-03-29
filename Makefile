CC=gcc
CFLAGS= `pkg-config --cflags --libs sdl2`
all: main

pacman.o: pacman.c pacman.h
	$(CC) -c pacman.c -o pacman.o $(CFLAGS)

app.o: app.c app.h pacman.h
	$(CC) -c app.c -o app.o $(CFLAGS)

main.o: main.c app.h
	$(CC) -c main.c -o main.o $(CFLAGS)

main: main.o app.o pacman.o
	$(CC) -o main main.o app.o pacman.o $(CFLAGS)

clean:
	rm *.o
