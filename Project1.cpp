#include <iostream>
#include <cmath>
#include <string>
#include "Unit.h"
#include "Infantry.h"
#include "Artillery.h"
#include "Cavalry.h"
#include "Captain.h"
using namespace std;

int main() {
    Infantry soldier(0, 0, "One");
    Artillery cannon(3, 4, "Two");
    Cavalry horseman(10, 10, "Three");
    Captain leader(1, 1, "One");

    soldier.attack(&cannon);
    cannon.display();

    leader.attack(&soldier);
    soldier.display();

    return 0;
}


