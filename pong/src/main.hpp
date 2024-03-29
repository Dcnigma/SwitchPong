#ifndef MAIN_HPP_
#define MAIN_HPP_

#include <SDL2/SDL.h>

const int SCREEN_WIDTH = 1900;
const int SCREEN_HEIGHT = 1050;

const float MAX_ANGLE = 3.142 / 5.0;

const float BALL_MAXSPEED = 18.0f;
const float BALL_ACCELERATE = 1.05f;
const float BALL_INIT_SPEED = 14.5f;
const int BALL_WIDTH = 25;
const int BALL_HEIGHT = 25;

void Initialize(SDL_Renderer **ren, SDL_Window **win);


void Cleanup(SDL_Renderer **ren, SDL_Window **win);

#endif /* MAIN_HPP_ */