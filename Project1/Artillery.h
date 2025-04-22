#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include "Unit.h"
using namespace std;

class Artillery : public Unit {
public:
    Artillery(int x, int y, string t) : Unit(10, 1, 10, x, y, t) {}
    void move(int dx, int dy) {
        if (abs(dx) > 1 || abs(dy) > 1) return;
        xPosition += dx;
        yPosition += dy;
    }
};

