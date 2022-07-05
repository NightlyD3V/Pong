#ifndef PADDLE_H
#define PADDLE_H

class Paddle
{
    public: 
        int set_velocity_y;
        int set_pos_x, set_pos_y;
        int set_height, set_width;
        SDL_Renderer* set_renderer;
        SDL_Rect* set_rect;

        Paddle(
            int set_velocity_y, 
            int set_pos_x, int set_pos_y, 
            int set_height, int set_width,
            SDL_Renderer* set_renderer, 
            SDL_Rect* set_rect
        );

        //-- Methods 
        void render();
        void move(int pos_x, int pos_y);

};

#endif