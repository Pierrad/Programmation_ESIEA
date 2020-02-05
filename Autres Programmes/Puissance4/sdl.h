#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include "jeton.h"
#ifndef SDL_H
#define  SDL_H


void sdl_start();

void sdl_setJetonPosition(int index, float x,float y);

#endif