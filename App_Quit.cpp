
#include "Library.h"

void App::Quit()
{
    SDL_DestroyTexture(testTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
