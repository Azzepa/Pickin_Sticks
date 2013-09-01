
#include "Library.h"

void App::Render()
{
    //Set Rendering colour to black
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    //Clear Renderer
    SDL_RenderClear(renderer);

    //Place test image on screen
    Texture::Draw(renderer, testTexture, 0, 0);

    //Put everything on screen
    SDL_RenderPresent(renderer);
}
