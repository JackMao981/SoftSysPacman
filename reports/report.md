##  Playable Pacman
by Jack Mao
#### Project Goal
In the Playable Pacman project, my goal is to create a simple Pacman game. The motivation behind this project is because of passion. I love video games, but I have never really understood how they were made. I thought by trying to code a what seems like a simple game in C, I would be able to get a good glimpse of the process of how video games are actually made.  

#### Learning Goals
Before the project started, I had no idea what I should do to start off my project. After all, I was a beginner in C and did not know where this project would take me. I simply wanted to learn the 2D game-development process.

In the beginning of the project, I was advised that the `graphics.h` library was a good starting point, but after a week of unsuccessful trials I gave up on using this library. There are several reasons why I gave up of this library. First, almost every forum I have visited on the internet discouraged me from using this library, calling it outdated, unsupported, and filled with bad coding practices. Second, I had a hard time understanding how to import libraries that were not part of the standard libraries. Lastly, I felt that the number of tutorials available for game design using graphics.h was lacking.

After moving away from `graphics.h`, I explored many other options. I was in quite a pickle, as C was a functional programming language. This meant that most of the game design libraries I found were catered towards C++. I ultimately decided on using `SDL2` as the game development library that I wanted to explore. Although this meant that I had to learn how to convert C++ code to C, `SDL2` had plenty of support and examples on the web. I also had the problem of not knowing how to properly import non-standard libraries during this time, but thankfully I was able to get this resolved by asking our awesome CA Manu.


#### Resources
The resource that I used the most during this project is a blogging site called [DEV](https://dev.to/noah11012/using-sdl2-in-c-and-with-c-too-1l72). Another commonly used site for general question is stackoverflow, and there is a discussion board for `SDL2` in this [link](https://stackoverflow.com/questions/31615012/are-there-good-tutorials-for-sdl2-0-for-c-programming-not-c/31615389).

#### Project Outcomes
I feel proud of what I learned and achieved during the project period (being a one person team), but at the same time, I feel disappointed at the project outcome. Right now, all I have is an animated Pacman that can move in the four cardinal direction.

#### Design Decisions
Most of the code that I have written was adapted from prior tutorials, since there was a slight learning curve to get around from C to C++. Also, all of the tutorials I found used object oriented programming as the paradigm instead of functional programming. The reasoning for coding using OOP is clear, since it made code very nicely organized and reusable. I had a hard time trying learn from the OOP code in C++ and converting it into good C code.  

In most tutorials that I found, there usually is a application class that creates the window for which your game is supposed to be played on. One generic snippet of this code in C++ is as follows:

```C++
class Application
{
public:
    Application();
    ~Application();

    void update();
    void draw();
private:
    SDL_Window  *m_window;
    SDL_Surface *m_window_surface;
    SDL_Event    m_window_event;
};
```
Obviously, there are no classes in C. Luckily for me, there is no need for this class to be reusable as only one window is needed. My abstraction of this class can be found in `app.c`, which looks like this:

```C
SDL_Surface *m_image;

// tells the x,y coordinates as well as the size.
SDL_Rect    *m_image_position;

SDL_Window  *m_window;
SDL_Surface *m_window_surface;
SDL_Event    m_window_event;
double      m_image_x;
double      m_image_y;

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
```

Another design decision that I had to focus on was creating a Makefile, because it was something that I think would contribute to my learning. Although this topic was covered in class and I thought I was good with this technique since it was covered in the readings, reality proved otherwise as I spent hours pondering why my Makefile was not working. I had to implore for the help of my trusty CA Manu to work with me on the Makefile. It took a long time before we figured out something that worked.

#### Code Snippets


#### Reflections
Although in terms of lower and upper bounds, I only did a bit more than the minimum viable product. However, I feel that I learned a lot. Considering that I was a one person team doing this project and the hidden complexity that I was unaware of before setting the goals, I feel satisfied by my progress. There were many troubles and bugs that I had along the way, and figuring these out really challenged and solidified my fundamentals in coding with the C language. Working with C++ templates and converting them to C code also helped with my perception of coding. Learning `SDL2` library felt really satisfying because it was something that I really had little experience with. The feedback and the presentable progress in the form of visual feedback really helped with my motivation.    

Personally, I would have liked more time to work on this project. Because of commitments from other classes, CA duties, and practically running OCO, I had limited time to work on this project. 
