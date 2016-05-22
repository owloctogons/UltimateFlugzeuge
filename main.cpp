//Using SDL, stdio, Lua, and Engine.h
#include "Engine/engine.h"
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <lua.hpp>

float player_speed;
float player_weight;
float player_acceleration;
double player_x;
double player_y;
double player_angle;

int main(int argc, char* args[]){
    // Start and create all elements of program
    startLua();
    startSDL();

    // Exit/Destroy/Quit all elements of program
    endSDL();
    endLua();
    return 0;
}
