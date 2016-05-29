#include "Engine_Movement.h"

int gravityValue(float weight, double spriteAngle){

    // TO-DO: CHANGE TO SWITCH-CASE (if possible)

    int spriteAngle_ = (int)spriteAngle;
    float gravity;

    if(player_acceleration >= 0){
        gravity = 0;
    }else{

        switch (spriteAngle_){

            case 0 ... 22:
                gravity = weight;
            break;
            case 23 ... 45:
                gravity = weight - 5;
            break;
            case 46 ... 67:
                gravity = weight - 15;
            break;
            case 68 ... 112:
                gravity = weight - 25;
            break;
            case 113 ... 135:
                gravity = weight - 15;
            break;
            case 136 ... 157:
                gravity = weight - 5;
            break;
            case 158 ... 202:
                gravity = weight;
            break;
            case 203 ... 225:
                gravity = weight - 5;
            break;
            case 226 ... 247:
                gravity = weight - 15;
            break;
            case 248 ... 292:
                gravity = weight - 25;
            break;
            case 293 ... 315:
                gravity = weight - 15;
            break;
            case 316 ... 337:
                gravity = weight - 5;
            break;
            case 338 ... 360:
                gravity = weight;
            break;
            default:
                gravity = weight;
            break;
        }
    }


    return gravity;
}
