//
//  Provehamus.cpp
//  Ice
//  Provehamus is the provehamus for this code.

#include "Provehamus.h"

void inceptoProvehamus()
{
	if ( SDL_Init (SDL_INIT_EVERYTHING) < 0 ) {
		
        fprintf(stderr, "Couldn't initialize SDL: %s\n",
                SDL_GetError());
		exit(1);
	}
}
void terminoProvehamus()
{
    SDL_Quit();
}