
#include "Library.h"

App::App()
{
    //Set everything to default values
    window = NULL;
    renderer = NULL;
    isRunning = true;
}

App::~App()
{

}

int App::Execute()
{
    if (!Initialise())
        return -1;

    //Game Loop
    SDL_Event event;
    while(isRunning)
    {
        while(SDL_PollEvent(&event))
            OnEvent(&event);

        Update();
        Render();
    }

    Exit();
    return 0;
}
