
#include "Library.h"

void App::OnEvent(SDL_Event* event)
{
    Event::OnEvent(&event);
}

void App::Exit()
{
    running = false;
}
