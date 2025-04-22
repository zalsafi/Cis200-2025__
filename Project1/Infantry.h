#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include "Unit.h"
using namespace std;

class Infantry : public Unit {
public:
    Infantry(int x, int y, string t) : Unit(5, 5, sqrt(2), x, y, t) {}
    void move(int dx, int dy) {
        if (abs(dx) > 5 || abs(dy) > 5) return;
        xPosition += dx;
        yPosition += dy;
    }
};
