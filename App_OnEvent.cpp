
#include "Library.h"

void App::OnEvent(SDL_Event* event)
{
    //Process for all the possible event types and react accordingly
    if (event->type == SDL_QUIT)
        isRunning = false;
}
