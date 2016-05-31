#include "Engine_Basic.h"
#include <SDL.h>
#include <SDL_image.h>
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
                             SDL_WINDOW_FULLSCREEN || SDL_WINDOW_SHOWN);
    //Initialize SDL_image
    IMG_Init(IMG_INIT_PNG);

}

void endSDL(){
    //Quit SDL_image
    IMG_Quit();
    //Destroy window
    SDL_DestroyWindow(game_window);
    game_window = NULL;
    //Quit SDL
    SDL_Quit();
}
