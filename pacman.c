#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include "pacman.h"
//
// m_image = SDL_LoadBMP("stick_figure.bmp");
//

// m_position.x = 0;
// m_position.y = 0;
// m_position.w = 22;
// m_position.h = 43;
//
// double m_image_x = 0.0;
// double m_image_y = 0.0;
enum Direction{NONE, UP, DOWN, RIGHT, LEFT};
enum Direction m_direction = NONE;
SDL_Rect m_clip;
int sprite_column = 0;
int const SPRITESHEET_RIGHT = 0;
int const SPRITESHEET_LEFT = 1;
int const SPRITESHEET_UP = 2;
int const SPRITESHEET_DOWN = 3;
void pacman_dimensions(SDL_Rect *m_image_position, double *m_image_x, double *m_image_y){
  // m_image = load_surface("./PacManCE/src/data/gfx/pacmanright1.bmp");
  m_image = load_surface("./PacManCE/pacman3.bmp");

  m_image_position->x = 700;
  m_image_position->y = 450;
  m_image_position->w = 80;
  m_image_position->h = 80;

  m_clip.w = 15;
  m_clip.h = 15;

  *m_image_x = (double) m_image_position->x;
  *m_image_y = (double) m_image_position->y;
}

void select_sprite(int x, int y){
  m_clip.x = x*m_clip.w;
  m_clip.y = y*m_clip.h;

}
void update_pacman(double delta_time){

  switch(m_direction)
      {
          case NONE:
              m_image_x += 0.0;
              m_image_y += 0.0;
              select_sprite(0, 0);
              break;
          case UP:
              select_sprite(sprite_column, SPRITESHEET_UP);
              m_image_y = m_image_y - (10.0 * delta_time);
              break;
          case DOWN:
              m_image_y = m_image_y + (10.0 * delta_time);
              select_sprite(sprite_column, SPRITESHEET_DOWN);
              break;
          case LEFT:
              m_image_x = m_image_x - (10.0 * delta_time);
              select_sprite(sprite_column, SPRITESHEET_LEFT);
              break;
          case RIGHT:
              m_image_x = m_image_x + (10.0 * delta_time);
              select_sprite(sprite_column, SPRITESHEET_RIGHT);
              break;
      }
    m_image_position->x = m_image_x;
    m_image_position->y = m_image_y;
  // m_image_x = m_image_x + (5.0 * delta_time);
  // m_image_position->x = m_image_x;
  sprite_column = (sprite_column + 1)%2;
}

void draw_pacman(SDL_Surface *m_window_surface){
  SDL_BlitSurface(m_image, &m_clip, m_window_surface, m_image_position);
  // SDL_BlitSurface(m_image, NULL, m_window_surface, m_image_position);
}


void handle_pacman_events(SDL_Event event){
  const uint8_t *keys = SDL_GetKeyboardState(NULL);
  switch(event.type)
  {
    case SDL_KEYDOWN:
        if(keys[SDL_SCANCODE_W] == 1){
          m_direction = UP;
        }
        else if(keys[SDL_SCANCODE_S] == 1){
          m_direction = DOWN;
        }
        else if(keys[SDL_SCANCODE_A] == 1){
          select_sprite(sprite_column, SPRITESHEET_LEFT);
          m_direction = LEFT;
        }
        else if(keys[SDL_SCANCODE_D] == 1){
          select_sprite(sprite_column, SPRITESHEET_RIGHT);
          m_direction = RIGHT;
        }
        break;
  }
  // printf("%d", m_direction);
}
