
#ifndef APP_H_INCLUDED
#define APP_H_INCLUDED

class App
{
private:
    bool isRunning;
public:
    App();
    ~App();

    int Execute();

    bool Initialise();
    void OnEvent(SDL_Event* Event);
    void Update();
    void Render();
    void Exit();
};

#endif // APP_H_INCLUDED
