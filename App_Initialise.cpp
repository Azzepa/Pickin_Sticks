
#include "Library.h"

bool App::Initialise()
{
    //Initialise SDL2
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
        return false;

    //Create a window
    window = SDL_CreateWindow("Pickin' Sticks", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, NULL);
    if (window == NULL)
        return false;

    //Create a rendering context
    renderer = SDL_CreateRenderer(window, -1, NULL);
    if (renderer == NULL)
        return false;

    return true;
}
