#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include "Unit.h"
using namespace std;

class Cavalry : public Unit {
public:
    Cavalry(int x, int y, string t) : Unit(5, 10, 5, x, y, t) {}
    void move(int dx, int dy) {
        if (abs(dx) > 10 || abs(dy) > 10) return;
        xPosition += dx;
        yPosition += dy;
    }
};


