#include "functions.h"

void morePoints() {

        if (points >= morePointsPrice)  {

            errorBan = false;

            points -= morePointsPrice;
            morePointsPrice *= 3;
            randPointMax *= 2;

        }
        
        else
            notEnoughPointsError();
}