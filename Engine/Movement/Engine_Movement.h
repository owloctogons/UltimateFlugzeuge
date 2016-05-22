#ifndef ENGINE_MOVEMENT_H
#define ENGINE_MOVEMENT_H

#include "../Engine.h"

///Movement_LocalScale.cpp
//track movement of sprite (x and y)
int spriteX_func(float speed, double spriteAngle);
int spriteY_func(float speed, double spriteAngle);

///Movement_Gravity.cpp
//track gravity (x)
int gravityValue(float weight, double spriteAngle);

#endif // ENGINE_MOVEMENT_H
