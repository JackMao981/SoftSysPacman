CC=gcc
_DEPS = SDL2/SDL.h
DEPS = $(pkg-config --cflags --libs sdl2)

test: test.o app.o
	$(CC) -o test test.o app.o
