
#include "Library.h"

SDL_Texture* Texture::Load(SDL_Renderer* renderer, const std::string &filePath)
{
    //Load the image to txture, and return
    return IMG_LoadTexture(renderer, filePath.c_str());
}

bool Texture::Draw(SDL_Renderer* renderer, SDL_Texture* source, const int &x, const int &y)
{
    //If source is null, can't do anything
    if (source == nullptr)
        return false;

    //Rect for coords of where image is going
    SDL_Rect destinationRect;
    destinationRect.x = x;
    destinationRect.y = y;
    SDL_QueryTexture(source, nullptr, nullptr, &destinationRect.w, &destinationRect.h);

    //Blit image
    SDL_RenderCopy(renderer, source, nullptr, &destinationRect);
    return true;
}
