#include "Engine_Movement.h"

int gravityValue(float weight, double spriteAngle){

    ///CHANGE TO SWITCH-CASE


    int gravity;

    if(player_acceleration <= 0){
        gravity = 0;
    }else{
        //
        if(spriteAngle <= 22.5 && spriteAngle >= 0){
            gravity = weight;
        }else if(spriteAngle <= 45 && spriteAngle >= 22.5){
            gravity = weight - 5;
        }else if(spriteAngle <= 67.5 && spriteAngle >= 45){
            gravity = weight - 10;
        }else if(spriteAngle <= 90 && spriteAngle >= 67.5){
            gravity = weight - 15;
        }else if(spriteAngle <= 112.5 && spriteAngle >= 90){
            gravity = weight - 15;
        }else if(spriteAngle <= 135 && spriteAngle >= 112.5){
            gravity = weight - 10;
        }else if(spriteAngle <= 157.5 && spriteAngle >= 135){
            gravity = weight - 5;
        }else if(spriteAngle <= 180 && spriteAngle >= 157.5){
            gravity = weight;
        }else if(spriteAngle <= 202.5 && spriteAngle >= 180){
            gravity = weight;
        }else if(spriteAngle <= 225 && spriteAngle >= 202.5){
            gravity = weight - 5;
        }else if(spriteAngle <= 247.5 && spriteAngle >= 225){
            gravity = weight - 10;
        }else if(spriteAngle <= 270 && spriteAngle >= 247.5){
            gravity = weight - 15;
        }else if(spriteAngle <= 292.5 && spriteAngle >= 270){
            gravity = weight - 15;
        }else if(spriteAngle <= 315 && spriteAngle >= 292.5){
            gravity = weight - 10;
        }else if(spriteAngle <= 337.5 && spriteAngle >= 315){
            gravity = weight - 5;
        }else if(spriteAngle <= 360 && spriteAngle >= 337.5){
            gravity = weight;
        }
    }


    return gravity;
}
