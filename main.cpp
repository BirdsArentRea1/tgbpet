#include<iostream>
using namespace std;

int PlayerHealth = 100;

void pet();

int main() {
	int room = 1;
	char input = 'a';
	int petaffinity = 0;

	srand(time(NULL));

	while (PlayerHealth >= 0 && input != 'q') {



		switch (room) {
		case 1:
			cout << "you're in room 1, you can go (s)outh. (p) to pet your pet." << endl;
			pet();
			cin >> input;
			if (input == 's')
				room = 2;
			if (input == 'p')
				petaffinity += 10;
				cout << "your pet affinity is", petaffinity  << endl;
			break;
		case 2:
			cout << "you're in room 2, you can go (s)outh or (n)orth. (p) to pet your pet." << endl;
			pet();
			cin >> input;
			if (input == 's')
				room = 3;
			if (input == 'n')
				room = 1;
			if (input == 'p')
				petaffinity = petaffinity += 10;
			break;

		case 3:
			cout << "you're in room 3, you can go (s)outh or (n)orth. (p) to pet your pet." << endl;
			pet();
			cin >> input;
			if (input == 's')
				room = 4;
			if (input == 'n')
				room = 2;
			if (input == 'p')
				petaffinity += 10;
			break;
		case 4:
			pet();
			if (petaffinity == 100)
				cout << "your pet found a secret room! (e)nter or go (b)ack";
			pet();
			cin >> input;
			if (input == 'e')
				room = 5;
			if (input == 'b')
				room = 2;
			break;

		}
	}
}


void pet() {
	int num = rand() % 100 + 1;
	if (num < 15)
		cout << "chester licks his paws" << endl;
	else if (num < 20)
		cout << "chester chases his tail." << endl;
	else if (num < 50)
		cout << "chester naps." << endl;
	else if (num < 75)
		cout << "chester meows." << endl;
	else if (num < 100)
		cout << "chester coughs up a hairball." << endl;
}
