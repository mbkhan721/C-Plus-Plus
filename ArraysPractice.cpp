#include<iostream>
using namespace std;

int main() {

	// 1.
	cout << "\n1. Initialize a string array named person with your name:\n";

	string person[3] = { "Muhammad", "Bilal", "Khan" };
	cout << person[1] << endl;

	for (int i = 0; i < 3; i++) {
		cout << person[i] << " ";
	}

	// 2.
	const int SIZE = 25;
	int evenNums[SIZE];

	for (int i = 0; i < SIZE; i++) {				// Iterate from 0 to 24 
		evenNums[i] = (i + 1) * 2;					// Store even from 1 to 50 inclusive
	}

	cout << "\n\n2. Even numbers from 1 to 50:" << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << evenNums[i] << " ";
	}

	// 3.
	const int SIZE2 = 26;
	char alphabet[SIZE2];

	for (int i = 0; i < SIZE2; i++) {
		alphabet[i] = i + 65;
		// OR
		//alphabet[i] = i + 'A';
	}

	cout << "\n\n3. Store all capital letters A - Z into alphabet:" << endl;

	for (int i = 0; i < SIZE2; i++) {
		cout << alphabet[i] << " ";
	}




	






	cout << endl;
	return 0;
}