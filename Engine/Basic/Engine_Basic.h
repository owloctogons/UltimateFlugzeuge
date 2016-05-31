#ifndef ENGINE_BASIC_H
#define ENGINE_BASIC_H
#include "../Engine.h"
#include <SDL.h>

///Basic_SDLFunc.cpp
//functions for starting and/or ending SDL
void startSDL();
void endSDL();
//variables
extern SDL_Surface* game_window_surface;
extern SDL_Window* game_window;

#endif // ENGINE_BASIC_H
