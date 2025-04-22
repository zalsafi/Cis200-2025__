

#include <iostream>
#include <string>
using namespace std;

class Trainer {
private:
	string name;
	int level;
	int experiencePoints;
	int maxNumberOfFightingPets;
	FightingPet* fightingPet;

public: Trainer(string name, int level=0, int experiencePoints=0, int maxNumberOfFightingPets=4, FightingPet* fightingPet) {
	name = name;
	level = level;
	experiencePoints = experiencePoints;
	maxNumberOfFightingPets = maxNumberOfFightingPets;
	fightingPet = fightingPet;
}
	  ~Trainer() {
		  delete[] fightingPet;
	  }

	  Trainer(const Trainer& trainer) {
		     name = trainer.name;
			  level = trainer.level;
			  experiencePoints = trainer.experiencePoints;
			  maxNumberOfFightingPets = trainer.maxNumberOfFightingPets;
			  fightingPet = new FightingPet*[maxNumberOfFightingPets];

			  for (int i = 0; i < maxNumberOfFightingPets; i++) {
				  fightingPet[i] = trainer.fightingPet[i];
			  }
		  }

	  Trainer& operator=(const Trainer& trainer) {
		  if (this == &trainer) {
			  return *this;

		  }
		  delete[] fightingPet;
		  name = trainer.name;
		  level = trainer.level;
		  experiencePoints = trainer.experiencePoints;
		  maxNumberOfFightingPets = trainer.maxNumberOfFightingPets;
		  fightingPet = new FightingPet * [maxNumberOfFightingPets];

		  for (int i = 0; i < maxNumberOfFightingPets; i++) {
			  fightingPet[i] = trainer.fightingPet[i];
		  }
		  return *this;

	  }

	  string getName() { return name; }
	  int getLevel() { return level; }
	  int getExperiencePoints() { return experiencePoints; }
	  int getMaxNumberOfFightingPets() { return maxNumberOfFightingPets; }
	  FightingPet* getFightingPet() { return fightingPet; }

	  void setName(string name) { name = name; }
	  void setLevel(int level) { level = level; }
	  void setExperiencePoints(int experiencePoints) { experiencePoints = experiencePoints;  }
	  void setMaxNumberOfFightingPets(int maxNumberOfFightingPets) { maxNumberOfFightingPets = maxNumberOfFightingPets;}
	  void setFightingPet(FightingPet* fightingPet) {
		 
		  }
	  }

void addExperiencePoints(int experiencePoints) {
	experiencePoints += experiencePoints;
	if (experiencePoints >= 100) {
		level++;
		experiencePoints = 0;
	}
}

	  void addFightingPet(const FightingPet pet){
		  for (int i = 0; 1 < maxNumberOfFightingPets; i++) {
			  if (fightingPet[i].getName() == "") {
				  fightingPet[i] = pet;
				  return;
			  }
			  else {
				  cout << "This is the max number of fighting pets." << endl;
			  }
		  }
	 

	  void display() {
		  cout << "Name: " << name << endl;
		  cout << "Level: " << level << endl;
		  cout << "Experience Points: " << experiencePoints << endl;
		  cout << "Max Number of Fighting Pets: " << maxNumberOfFightingPets << endl;
		  cout << "Fighting Pet: " << fightingPet->getName() << endl;
	  }


};
	  
	  class FightingPet {
	  private:
		  string name;
		  int number;
		  int combatPower;

	  public: FightingPet(string name, int number, int combatPower) {
		  name = name;
		  number = number;
		  combatPower = combatPower;
	  }

			string getName() { return name; }
			int getNumber() { return number; }
			int getCombatPower() { return combatPower; }

			void setName(string name) { name = name; }
			void setNumber(int number) { number = number; }
			void setCombatPower(int combatPower) { combatPower = combatPower; }
	  };