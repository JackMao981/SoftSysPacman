#include "header.h"
// gcc test.c app.c -o test $(pkg-config --cflags --libs sdl2)
SDL_Surface *m_image;

// tells the x,y coordinates as well as the size.
SDL_Rect     m_image_position;

SDL_Window  *m_window;
SDL_Surface *m_window_surface;
SDL_Event    m_window_event;

// helper function for draw
SDL_Surface *load_surface(char const *path)
{
    SDL_Surface *image_surface = SDL_LoadBMP(path);

    if(!image_surface){
        printf("no image surface\n");
        return 0;
    }
    return image_surface;
}

// makes window
void application(){
  m_window = SDL_CreateWindow("SDL2 Window",
                             SDL_WINDOWPOS_CENTERED,
                             SDL_WINDOWPOS_CENTERED,
                             800, 600,
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
  m_image = load_surface("./PacManCE/src/data/gfx/pacmanright1.bmp");
  m_image_position.x = 400;
  m_image_position.y = 300;
  m_image_position.w = 20;
  m_image_position.h = 20;

}

// actually draw stuff
void draw(){
  SDL_UpdateWindowSurface(m_window);
  SDL_BlitSurface(m_image, NULL, m_window_surface, &m_image_position);
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
      m_image_position.x += 1;
      draw();
  }
}
