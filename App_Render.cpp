
#include "Library.h"

void App::Render()
{
    //Set Rendering colour to black
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    //Clear Renderer
    SDL_RenderClear(renderer);
    //Put everything to screen
    SDL_RenderPresent(renderer);
}
