
#include "Library.h"

void App::Exit()
{
    SDL_DestroyTexture(testTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
