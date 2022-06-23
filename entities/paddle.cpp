#include "./headers/paddle.h"

int velocity _y 
int pos_x, pos_y;

//-- Constructor
Paddle::void Paddle(int velocity_y, int pos_x, int pos_y)
{
    printf("Paddle is being created!");
    this-> velocity_y = velocity_y;
    this-> pos_x = pos_x;
    this-> pos_y = pos_y;
}

//-- Methods
Paddle::void move(int x, int y)
{
    printf("MOVED!");
}
