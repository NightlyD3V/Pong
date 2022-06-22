#ifndef PADDLE_H
#define PADDLE_H

class Paddle
{
    public: 
        int velocity_y;
        int pos_x, pos_y;

    Paddle(int velocity_y, int pos_x, int pos_y);

    void move(int x, int y);

};

#endif