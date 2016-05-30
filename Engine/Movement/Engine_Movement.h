#ifndef ENGINE_MOVEMENT_H
#define ENGINE_MOVEMENT_H

#include "../Engine.h"

///Movement_LocalScale.cpp
//track movement of player according to player's forward angle (x and y)
int spriteX_func(float speed, double spriteAngle);
int spriteY_func(float speed, double spriteAngle);

///Movement_Gravity.cpp
//track gravity (x)
int gravityValue(float weight, double spriteAngle);

///Movement_Speed.cpp
//track forward (or backward) acceleration
float accelerationValue(bool key_UP, float speed);
float speedValue(float acceleration);

#endif // ENGINE_MOVEMENT_H
