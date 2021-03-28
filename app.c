#include "header.h"

SDL_Window  *m_window;
SDL_Surface *m_window_surface;
SDL_Event    m_window_event;

void application(){
  m_window = SDL_CreateWindow("SDL2 Window",
                             SDL_WINDOWPOS_CENTERED,
                             SDL_WINDOWPOS_CENTERED,
                             680, 480,
                             0);

  if(!m_window)
  {
    printf("Failed to create window\n");
    printf("SDL2 Error: %s", SDL_GetError());
    printf("\n");
     return;
  }

  m_window_surface = SDL_GetWindowSurface(m_window);

  if(!m_window_surface)
  {
     printf("Failed to get window's surface\n");
     printf("SDL2 Error: %s", SDL_GetError());
     printf("\n");
     return;
  }
}

void draw(){
  SDL_UpdateWindowSurface(m_window);
}
void update(){
  int keep_window_open = 1;
  while(keep_window_open)
  {
      while(SDL_PollEvent(&m_window_event) > 0)
      {
          switch(m_window_event.type)
          {
              case SDL_QUIT:
                  keep_window_open = 0;
                  break;
          }
      }

      draw();
  }
}
