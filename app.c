#include "app.h"
#include "pacman.h"
// gcc test.c app.c -o test $(pkg-config --cflags --libs sdl2)
// images found at https://www.ticalc.org/archives/files/fileinfo/464/46430.html
SDL_Surface *m_image;

// tells the x,y coordinates as well as the size.
SDL_Rect    *m_image_position;

SDL_Window  *m_window;
SDL_Surface *m_window_surface;
SDL_Event    m_window_event;
double      m_image_x;
double      m_image_y;

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
                             1500, 1000,
                             0);

  if(!m_window)
  {
     return;
  }

  m_window_surface = SDL_GetWindowSurface(m_window);
  if(!m_window_surface)
  {
     return;
  }

  m_image_position = (SDL_Rect*) malloc(sizeof(SDL_Rect));

  pacman_dimensions(m_image_position, &m_image_x, &m_image_y);

}

// actually draw stuff
void draw(){
  SDL_UpdateWindowSurface(m_window);
  // destroys previous images
  SDL_FillRect(m_window_surface, NULL, SDL_MapRGB(m_window_surface->format, 0, 0, 0));
  // blit image
  draw_pacman(m_window_surface);
}



void loop(){
  int keep_window_open = 1;
  while(keep_window_open)
  {
      while(SDL_PollEvent(&m_window_event) > 0)
      {
          handle_pacman_events(m_window_event);
          switch(m_window_event.type)
          {
              case SDL_QUIT:
                  keep_window_open = 0;
                  break;
          }
      }
      update(1.0/60.0);
      draw();
  }
}

void update(double delta_time){
  update_pacman(delta_time);
}
