#include <iostream>
#include "image_test.h"
#include <SDL2/SDL.h>

const int WIDTH = 640, HEIGHT = 360;

int main( int argc, char *argv[] )
{
    SDL_Surface *imageSurface = NULL;
    SDL_Surface *windowSurface = NULL;
//
//    SDL_Window *window = SDL_CreateWindow( "Mario Bros", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI );
//    windowSurface = SDL_GetWindowSurface( window );
//
//    SDL_Event windowEvent;


    imageSurface = SDL_LoadBMP( "mario.bmp" );

//    while ( true )
//    {
//        if ( SDL_PollEvent( &windowEvent ) )
//        {
//            if ( SDL_QUIT == windowEvent.type )
//            {
//                break;
//            }
//        }
//
//        SDL_BlitSurface( imageSurface, NULL, windowSurface, NULL );
//
//        //Update the surface
//        SDL_UpdateWindowSurface( window );
//    }
//
    SDL_FreeSurface( imageSurface );
    SDL_FreeSurface( windowSurface );

  //  imageSurface = NULL;
//    windowSurface = NULL;
//
//    SDL_DestroyWindow( window );
//    SDL_Quit( );

    return EXIT_SUCCESS;
}
