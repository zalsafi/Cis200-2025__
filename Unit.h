#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Unit {
public:
    int attackPower;
    int hitPoints;
    int maxHitPoints;
    double range;
    int xPosition;
    int yPosition;
    string team;
    bool isAlive;

    Unit(int attackPower, int hitPoints, double range, int xPosition, int yPosition, string team) {
        this->attackPower = attackPower;
        this->hitPoints = hitPoints;
        this->maxHitPoints = hitPoints;
        this->range = range;
        this->xPosition = xPosition;
        this->yPosition = yPosition;
        this->team = team;
        this->isAlive = true;
    }

    void attack(Unit* target) {
        if (!target || !isAlive) return;

        double distance = sqrt((xPosition - target->xPosition) * (xPosition - target->xPosition) +
            (yPosition - target->yPosition) * (yPosition - target->yPosition));
        if (distance > range) return;

        if ((team == "One" && (target->team == "Two" || target->team == "Three")) ||
            (team == "One" && (target->team == "Two" || target->team == "Three")) ||
            (team == "Three")) {
            target->hitPoints -= attackPower;
            if (target->hitPoints <= 0) {
                target->hitPoints = 0;
                target->isAlive = false;
            }
        }
    }

    virtual void move(int dx, int dy) {}

    void display() {
        cout << "Unit at (" << xPosition << ", " << yPosition << ") with " << hitPoints << " HP.\n";
    }
};

