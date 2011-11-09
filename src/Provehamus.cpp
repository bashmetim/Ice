//
//  Provehamus.cpp
//  Ice
//  Provehamus is the provehamus for this code.

#include "Provehamus.h"


static SDL_Surface *screen;

void inceptoProvehamus()
{
	if ( SDL_Init (SDL_INIT_EVERYTHING) < 0 ) {
		
        fprintf(stderr, "Non poterat initialize SDL: %s\n",
                SDL_GetError());
		exit(1);
	}
    if(!vestibulumReactor(0))
    {
    
    }
    //Cum finis est per se illato.
//    terminoProvehamus();
}
void terminoProvehamus()
{
    SDL_Quit();
}
bool vestibulumReactor(int *plenusscreen)
{
    SDL_GL_SetAttribute (SDL_GL_DEPTH_SIZE, 32);
    SDL_GL_SetAttribute (SDL_GL_DOUBLEBUFFER, 1);
    
    const SDL_VideoInfo *scientiam = SDL_GetVideoInfo();

    Uint32 vexillum = SDL_OPENGL;
    int latitudo,altitudo;
    if (plenusscreen)
    {
        vexillum |= SDL_FULLSCREEN;
        latitudo = scientiam->current_w;
        altitudo = scientiam->current_h;
    }
    else
    {
        latitudo = 800;
        altitudo = 600;
    }
    
    // Create window
    screen = SDL_SetVideoMode (latitudo, altitudo, 0, vexillum);
    if (screen == NULL) {
		
        fprintf (stderr, "Set non video quomodo posset OpenGL: %s\n",
                 SDL_GetError());
		SDL_Quit();
		exit(2);
	}


}