#include <SDL2/SDL.h>
#include "./headers/paddle.h"


//-- Constructor
Paddle::Paddle(
    int velocity_y, 
    int pos_x, int pos_y, 
    int height, int width,
    SDL_Renderer* renderer,
    SDL_Rect* rect
) : set_velocity_y(velocity_y),
    set_pos_x(pos_x),
    set_pos_y(pos_y), 
    set_height(height), 
    set_width(width), 
    set_renderer(renderer), 
    set_rect(rect)
{
    printf("Paddle is being created!");
}

//-- Methods
void Paddle::render()
{
    this->set_rect->x = this-> set_pos_x;
    this->set_rect->y = this-> set_pos_y;
    this->set_rect->h = this-> set_height;
    this->set_rect->w = this-> set_width;
    SDL_RenderDrawRect(this->set_renderer, this->set_rect);
}

void Paddle::move(int x, int y)
{
    printf("MOVED!");
}
