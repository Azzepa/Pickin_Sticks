
#ifndef SURFACE_H_INCLUDED
#define SURFACE_H_INCLUDED

class Texture
{
private:
public:
    Texture();
    ~Texture();

    static SDL_Texture* Load(SDL_Renderer* renderer, const std::string &filePath);
    static bool Draw(SDL_Renderer* renderer, SDL_Texture* source, const int &x, const int &y);
};

#endif // SURFACE_H_INCLUDED
