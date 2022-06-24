#ifndef PADDLE_H
#define PADDLE_H

class Paddle
{
    public: 
        int velocity_y;
        int pos_x, pos_y;
        int height, width;
        SDL_Renderer* renderer;
        SDL_Rect* rect;

    Paddle(
        int velocity_y, 
        int pos_x, int pos_y, 
        int height, int width,
        SDL_Renderer* renderer, 
        SDL_Rect* rect
    );

    //-- Methods 
    void render();
    void move(int pos_x, int pos_y);

};

#endif