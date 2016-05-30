//Using SDL, stdio, Lua, and Engine.h
#include "Engine/engine.h"
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>

//player variables
float player_speed = (speedValue(player_acceleration)) + (gravityValue(player_weight, player_angle));
float player_weight = 50;
float player_acceleration = accelerationValue(kp_UP, player_speed);
double player_x = 10;
double player_y = 0;
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

    //While game is open
    while(!quit){

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
