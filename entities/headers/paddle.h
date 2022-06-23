#ifndef PADDLE_H
#define PADDLE_H

class Paddle
{
    public: 
        int velocity_y;
        int pos_x, pos_y;
        int height, width;
        SDL_Rect* rect;
        SDL_Renderer* renderer;

    Paddle(int velocity_y, int pos_x, int pos_y, SDL_Renderer* renderer);

    void move(int pos_x, int pos_y);

};

#endif