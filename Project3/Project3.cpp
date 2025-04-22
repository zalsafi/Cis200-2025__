#include <vector>
#include <iostream>
using namespace std;
class Commander {
private:
    int hitPoints = 40;
   Creature* firstCreature = nullptr;

   void addCreature(Creature& Creature) {
	   }
public:
	Commander(int hitPoints = 40, Creature* firstCreature) {
		hitPoints = hitPoints;
		firstCreature = firstCreature;
	}
};

class Creature {
private: int strength;
       int defense;
       Creature* nextCreature;
public:
	Creature(int strength = 0, int defense = 0, Creature* nextCreature = nullptr) {
		this->strength = strength;
		this->defense = defense;
		this->nextCreature = nextCreature;
	}
	Creature(Creature& other) {
		strength = other.strength;
		defense = other.defense;
		nextCreature = nullptr;

        if (other.nextCreature) {
			nextCreature = new Creature(*other.nextCreature);
		}

        
    }
	~Creature() {
		delete nextCreature;
	}
};

int main()
{
   
}