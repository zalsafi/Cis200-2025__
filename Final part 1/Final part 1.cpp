#include <iostream>
#include <vector>
#include <string>

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

int main() {
	vector<Cards> shoe;
	string suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 1; k <= 13; k++) {
				shoe.push_back(Cards(k, suit[j]));
			}
		}
	}

	
	for (int i = 0; i < 5; i++) {
		shoe[i].printCard();
	}

	return 0;
}
