#include <iostream>
#include <stdio.h>
#include "render.h"

//Simple game design follows a Input -> Update -> draw Loop when running

int main( int argc, char* argv[] )
{
    
    Renderer r = Renderer(600, 900, 60, IMG_INIT_PNG, "Test Render Window");
    r.Renderer_Init();
    SDL_RenderClear(r.get_SDLRenderer());
    Object o = Object("res/charSheet1.png", 96, 96, 100, 100, false, r.get_SDLRenderer());

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while( !quit )
    {   

        SDL_RenderClear(r.get_SDLRenderer());

        o.draw(r.get_SDLRenderer());

        SDL_RenderPresent(r.get_SDLRenderer());

        //Handle events on queue
        while( SDL_PollEvent( &e ) != 0 )
        {
            //User requests quit
            if( e.type == SDL_QUIT )
            {
                r.Renderer_Close();
                quit = true;
            }
        }

        
    }

    /*need to work with a basic input -> update -> render System*/


    return 0;

}