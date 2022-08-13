#include "globals.h"

Object::Object(const char* sprite_path, int col_width, int col_height, bool col, SDL_Renderer* ren)
{
    sprite_surf=IMG_Load(sprite_path);
    if(!sprite_surf)
    {
        printf("Unable to load \"%s\" ERRROR: %s", sprite_path, IMG_GetError());

    }else{
        printf("A");
        tex=SDL_CreateTextureFromSurface(ren, sprite_surf);
        if(!tex)
        {
            printf("Unable to generate a texture of \"%s\" ERROR: %s", sprite_path, SDL_GetError());
        }else{
            collider_box={0, 0, col_width, col_height};
        }
    }
    
    SDL_FreeSurface(sprite_surf);

}


void Object::draw(SDL_Renderer* r)
{
    SDL_RenderCopy(r, tex, NULL, &collider_box);
}