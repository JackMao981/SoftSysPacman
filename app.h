#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

SDL_Window  *m_window;
SDL_Surface *m_window_surface;
SDL_Event    m_window_event;

void application();
void draw();
void loop();
void update(double delta_time);
