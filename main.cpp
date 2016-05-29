//Using SDL, stdio, Lua, and Engine.h
#include "Engine/engine.h"
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <lua.hpp>

float player_speed = 0;
float player_weight = NULL;
float player_acceleration = 0;
double player_x = 10;
double player_y = 0;
double player_angle = 0;

int main(int argc, char* args[]){
    // Start and create all elements of program
    startLua();
    startSDL();

    // Exit/Destroy/Quit all elements of program
    endSDL();
    endLua();
    return 0;
}
