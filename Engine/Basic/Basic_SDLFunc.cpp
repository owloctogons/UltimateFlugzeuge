#include "Engine_Basic.h"
#include <SDL.h>
#include <stdio.h>

SDL_Window* game_window;

void startSDL(){
    //SDL Initialization
    SDL_Init(SDL_INIT_VIDEO);
    //Create the window
    game_window = SDL_CreateWindow("Ultimate Flugzeuge",
                             SDL_WINDOWPOS_UNDEFINED,
                             SDL_WINDOWPOS_UNDEFINED,
                             1024,
                             768,
                             SDL_WINDOW_FULLSCREEN);
}

void endSDL(){
    //Destroy window
    SDL_DestroyWindow(game_window);
    game_window = NULL;
    //Quit SDL
    SDL_Quit();
}
