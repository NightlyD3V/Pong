#include <SDL2/SDL.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL_events.h>
#include <stdio.h>
//-- Custom header imports -->
#include "../entities/headers/paddle.h"
//---------------------------------------------------------------//
//--                          MAIN                              -->
//---------------------------------------------------------------//
int main(int argc, char* argsv[])
{    
    //-- SDL pointers init                     
    SDL_Window* main_window = NULL;
    SDL_Surface* screen = NULL;
    SDL_Renderer* renderer = NULL;

    //-- Init SDL and * subsystems                    
    if( SDL_Init(SDL_INIT_EVERYTHING != 0) ) 
    {
        printf("SDL failed to initialize: %s\n", SDL_GetError() );
        return 1;
    } 
    else {
        //-- Create window                            
        main_window = SDL_CreateWindow(
            "PONG", 
            SDL_WINDOWPOS_CENTERED, 
            SDL_WINDOWPOS_CENTERED,
            800,
            800,
            SDL_WINDOW_SHOWN
        );
        if( main_window == NULL )
        {
            printf("Window failed to initialize: %s\n", SDL_GetError() );
        }
        else
        {
            //-- RENDERER INIT            
            renderer = SDL_CreateRenderer(main_window, -1, SDL_RENDERER_ACCELERATED);
            //-- Game Loop
            bool GameIsRunning = true;
            while( GameIsRunning )
            {
                //-- Event loop
                SDL_Event event;
                while ( SDL_PollEvent( &event ) )
                {
                    if( event.type == SDL_QUIT )
                    {
                        GameIsRunning = false;
                    }
                }

                //-- Renderer 
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
                SDL_RenderClear(renderer);

                //-- Render middle line
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
                SDL_RenderDrawLine(renderer, 400, 0, 400, 800);

                //-- Instance left paddle
                SDL_Rect* left_paddle;
                Paddle LeftPaddle(
                    0, 
                    20, 100, 
                    100, 50, 
                    renderer, 
                    left_paddle
                    );
                LeftPaddle.render();
                
                //-- Instance right paddle
                SDL_Rect* right_paddle;
                Paddle RightPaddle(
                    0,
                    100, 100,
                    100, 50,
                    renderer, 
                    right_paddle
                );
                RightPaddle.render();
                
                SDL_RenderPresent(renderer);
            };
        };
    };
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(main_window);
    SDL_Quit();
    return 0;
};
//-----------------------------------------------------------------//