#include "Engine_Movement.h"

float accelerationValue(bool key_UP, float speed){

    float acceleration;

    if(key_UP == true){
        acceleration = 1.4;
    }else if(speed == 0){
        acceleration = 0;
    }else{
        acceleration = -0.7;
    }

    return acceleration;
}

float speedValue(float acceleration){

    float speed = speed + acceleration;
    return speed;
}
