#ifndef ENGINE_H
#define ENGINE_H

///Basic!!
#include "Basic/Engine_Basic.h"

///Movement!!
#include "Movement/Engine_Movement.h"

// Player
extern float player_speed;
extern float player_weight;
extern float player_acceleration;
extern double player_x;
extern double player_y;
extern double player_angle;

// Key presses
extern bool kp_UP;
extern bool kp_LEFT;
extern bool kp_DOWN;
extern bool kp_RIGHT;
extern bool kp_Z;
extern bool kp_X;
extern bool kp_C;
extern bool kp_ESC;

#endif // ENGINE_H
