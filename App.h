
#ifndef APP_H_INCLUDED
#define APP_H_INCLUDED

class App: public Event
{
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool isRunning;

    SDL_Texture* testTexture;
public:
    App();
    ~App();

    int Execute();

    bool Initialise();
    void OnEvent(SDL_Event* event);
    void Update();
    void Render();
    void Quit();

    //Eventfunctions
};

#endif // APP_H_INCLUDED
