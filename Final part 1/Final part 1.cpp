#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class Cards {
private:
    int num;
	string suit;
	
public:
	
	Cards(int num, string suit) {
		this->num = num;
		this->suit = suit;
    }
	int getNum() {
		return num;
	}
	string getSuit() {
		return suit;
	}

	void printCard() {
		if (num == 1) {
			cout << "Card: Ace of " << suit << endl;
		}
		else if (num == 11) {
			cout << "Card: Jack of " << suit << endl;
		}
		else if (num == 12) {
			cout << "Card: Queen of " << suit << endl;
		}
		else if (num == 13) {
			cout << "Card: King of " << suit << endl;
		}
		else

		cout << "Card: " << num << " of " << suit << endl;

	}
	
};

class Game {
private:
	int hand = 1;
	bool score;
public:
	Game(int hand, bool score) {
		this->hand = hand;
		this->score = score;
	}

	int getHand() {
		return hand;
	}
	bool getScore() {
		score = false;
		return score;
	}

};

void shuffleDeck(vector<Cards>shoe) {
	int i, j;
	for (i = 0; i < shoe.size(); i++) {
		j = rand() % shoe.size();

		Cards temp = shoe[i];
		shoe[i] = shoe[j];
		shoe[j] = temp;
	}
}

int main() {
	srand(time(0));
	vector<Cards> shoe;
	string suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 1; k <= 13; k++) {
				shoe.push_back(Cards(k, suit[j]));
			}
		}
	}

	shuffleDeck(shoe);
	if (shoe.size() < 100) {
		shuffleDeck(shoe);
		cout << "Reshuffling deck..." << endl;
	} 

	for (int i = 0; i < shoe.size(); i++) {
		shoe[i].printCard();
	}
	return 0;

}
