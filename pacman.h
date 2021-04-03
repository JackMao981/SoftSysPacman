SDL_Rect    *m_image_position;
double      m_image_x;
double      m_image_y;
SDL_Window  *m_window;
SDL_Surface *m_image;
SDL_Surface *m_window_surface;

// void select(enum Direction dir, int *switch);
void pacman_dimensions(SDL_Rect *m_position, double *m_image_x, double *m_image_y);
void update_pacman(double delta_time);
void draw_pacman(SDL_Surface *m_window_surface);
SDL_Surface *load_surface(char const *path);
void handle_pacman_events(SDL_Event event);
