#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include "Unit.h"
#include "Infantry.h"

using namespace std;

class Captain : public Infantry {
public:
    Captain(int x, int y, string t) : Infantry(x, y, t) {
        attackPower = 1;
        hitPoints = 20;
        maxHitPoints = 20;
		range = 5.0;
    }

    void attack(Unit* target) {
        if (!target || target->team != team) return;
        double distance = sqrt((xPosition - target->xPosition) * (xPosition - target->xPosition) +
            (yPosition - target->yPosition) * (yPosition - target->yPosition));
        if (distance <= range) {
            target->hitPoints = target->maxHitPoints;
        }
    }
};
