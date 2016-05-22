#include "Engine_Movement.h"
#include <cmath>
#include <ctime>
#include <SDL.h>

/* Normal/Local scale movement implementation
float speed_ = speed * delta; //10 pixels per second
spriteX += cos(spriteAngle) * speed_;
spriteY += sin(spriteAngle) * speed_;
*/
//3.14159265359 is Pi, if you didn't know

int delta = 16.6666666666666666666666666666666666666666666666666666666666;

//function to track the location: X :of character or AI
int spriteX_func(float speed, double spriteAngle){

    int spriteAngle_ = spriteAngle * (180/3.14159265359);
    int speed_ = speed * delta;
    int spriteX = cos(spriteAngle_) * speed_;

    return spriteX;
}

//function to track the location: Y :of character or AI
int spriteY_func(float speed, double spriteAngle){

    int spriteAngle_ = spriteAngle * (180/3.14159265359);
    int speed_ = speed * delta;
    int spriteY = sin(spriteAngle_) * speed_;

    return spriteY;
}
