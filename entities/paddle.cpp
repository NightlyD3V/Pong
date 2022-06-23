#include "./headers/paddle.h"

int velocity _y 
int pos_x, pos_y;
int width, height;

//-- Constructor
Paddle::void Paddle(
    int velocity_y, 
    int pos_x, int pos_y, 
    int height, int width,
    SDL_Renderer* renderer,
    SDL_Rect* rect
    )
{
    printf("Paddle is being created!");
    this-> velocity_y = velocity_y;
    this-> pos_x = pos_x;
    this-> pos_y = pos_y;
    this-> height = height;
    this-> width = width;
    this-> renderer = renderer;
    this-> rect = rect;
}

//-- Methods
Paddle::void render(
    this.renderer, 
    this.rect
    )
{
    SDL_RenderDrawRect(renderer, rect);
}

Paddle::void move(int x, int y)
{
    printf("MOVED!");
}
