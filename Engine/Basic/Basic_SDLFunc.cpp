#include "Engine_Basic.h"
#include <SDL.h>
#include <stdio.h>
#include <windows.h>

SDL_Surface* game_window_surface;
SDL_Window* game_window;

void startSDL(){

    int mX = GetSystemMetrics(SM_CXSCREEN);
    int mY = GetSystemMetrics(SM_CYSCREEN);

    //SDL Initialization
    SDL_Init(SDL_INIT_VIDEO);
    //Create the window
    game_window = SDL_CreateWindow("Ultimate Flugzeuge",
                             SDL_WINDOWPOS_UNDEFINED,
                             SDL_WINDOWPOS_UNDEFINED,
                             mX,
                             mY,
                             SDL_WINDOW_FULLSCREEN);
}

void endSDL(){
    //Destroy window
    SDL_DestroyWindow(game_window);
    game_window = NULL;
    //Quit SDL
    SDL_Quit();
}
