
#include "Library.h"

bool App::Initialise()
{
    //Initialise SDL2
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
        return false;

    //Create a window
    window = SDL_CreateWindow("Pickin' Sticks", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
    if (window == nullptr)
        return false;

    //Create a rendering context
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer == nullptr)
        return false;

    //Load a test image to display
    testTexture = Texture::Load(renderer, "Img/Wall.png");
    if (testTexture == nullptr)
        return false;

    return true;
}
