//Using SDL, stdio, Lua, and Engine.h
#include "Engine/engine.h"
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>

//player variables
float player_speed = (speedValue(player_acceleration)) + (gravityValue(player_weight, player_angle));
float player_weight = 50;
float player_acceleration = accelerationValue(kp_UP, player_speed);
double player_x = spriteX_func(player_speed, player_angle);
double player_y = spriteX_func(player_speed, player_angle);
double player_angle = 0.00000;

//key press variables
bool kp_UP;
bool kp_LEFT;
bool kp_DOWN;
bool kp_RIGHT;
bool kp_Z;
bool kp_X;
bool kp_C;
bool kp_ESC;

int main(int argc, char* args[]){
    // Start and create all elements of program
    startSDL();

    // Keyboard and closing-out events
    SDL_Event e;
    bool quit = false;

    //Make sure that game_window_surface is applyed to game_window
    game_window_surface = SDL_GetWindowSurface(game_window);

    //set game_openingscreen
    SDL_Surface* game_openingscreen = IMG_Load("Resources/menu_main.png");

    SDL_BlitSurface(game_openingscreen, NULL, game_window_surface, NULL);
    SDL_UpdateWindowSurface(game_window);

    SDL_Delay(5000);

    SDL_FreeSurface(game_openingscreen);
    game_openingscreen = NULL;

    SDL_UpdateWindowSurface(game_window);

    /*
    class Player{
        public:
            static const int SPRITE_H = 32;
            static const int SPRITE_W = 32;


        private:

    };
    */

    //While game is open
    while(!quit){

        --scrollOffset;
        if(scrollOffset < -tex_background.getWidth()){
            scrollOffset = 0;
        }

        //While SDL_PollEvent is on
        while(SDL_PollEvent(&e) != 0){

            if(e.type == SDL_QUIT || kp_ESC == true){
                quit = true;
            }else if(e.type == SDL_KEYDOWN){

                switch(e.key.keysym.sym){

                case SDLK_UP:
                    kp_UP = true;
                break;
                case SDLK_LEFT:
                    kp_LEFT = true;
                break;
                case SDLK_DOWN:
                    kp_DOWN = true;
                break;
                case SDLK_RIGHT:
                    kp_RIGHT = true;
                break;
                case SDLK_z:
                    kp_Z = true;
                break;
                case SDLK_x:
                    kp_X = true;
                break;
                case SDLK_c:
                    kp_C = true;
                break;
                case SDLK_ESCAPE:
                    kp_ESC = true;
                }
            }
        }


    }

    // Exit/Destroy/Quit all elements of program
    endSDL();
    return 0;
}
