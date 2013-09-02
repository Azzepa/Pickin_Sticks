
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
    static bool Draw(SDL_Renderer* renderer, SDL_Texture* source, const int &x, const int &y,
                     const int &x2, const int &y2, const int &w, const int &h);
};

#endif // SURFACE_H_INCLUDED
