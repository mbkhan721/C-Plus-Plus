#include<iostream>
#include<time.h>
using namespace std;

int main() {
	/*
	// 1.
	cout << "\n1. Initialize a string array named person with your name:\n";

	string person[3] = { "Muhammad", "Bilal", "Khan" };
	cout << person[1] << endl;

	for (int i = 0; i < 3; i++) {
		cout << person[i] << " ";
	}

	// 2 -----------------------------------------
	const int SIZE = 25;
	int evenNums[SIZE];

	for (int i = 0; i < SIZE; i++) {				// Iterate from 0 to 24 
		evenNums[i] = (i + 1) * 2;					// Store even from 1 to 50 inclusive
	}

	cout << "\n\n2. Even numbers from 1 to 50:" << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << evenNums[i] << " ";
	}

	// 3 -----------------------------------------
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

	// 4 -----------------------------------------
	const int SIZE3 = 20;
	srand(time(NULL));

	int randInts[SIZE3];

	for (int i = 0; i < SIZE3; i++) {
		randInts[i] = rand() % 20;
	}

	cout << "\n\n4. Random digits with Linear Search to locate values:" << "\n";

	for (int i = 0; i < SIZE3; i++) {
		cout << randInts[i] << " ";
	}
	cout << endl;
	int n;
	cout << "Enter an integer: ";
	cin >> n;

	for (int i = 0; i < SIZE3; i++) {
		if (n == randInts[i]) {
			cout << i << endl;
		}
	}


	// 5 -----------------------------------------
	cout << "\n\n5. Random digits:" << "\n";
	const int SIZE4 = 10;
	int randNums[SIZE4];

	for (int i = 0; i < SIZE4; i++) {
		randNums[i] = rand() % SIZE4;
	}

	for (int i = 0; i < SIZE4; i++) {
		cout << randNums[i] << " ";
	}
	cout << endl;

	float average = 0;
	for (int i = 0; i < SIZE4; i++) {
		average += randNums[i];
	}
	cout << "Average is: " << average / SIZE4 << "\n";
	

	// 6 -----------------------------------------
	cout << "\n\n6. 4x5 two-dimensional array:\n";

	const int D1 = 4;
	const int D2 = 5;

	int array1[D1][D2];											// Declare a 2x3 two-dimension array
	int counter = 10;
	
	for (int i = 0; i < D1; i++) {
		for (int j = 0; j < D2; j++) {
			array1[i][j] = counter++;
		}
	}
	cout << "\n";

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}
	

	// 7 -----------------------------------------
	cout << "\n\n7. 4x5 two-dimensional xoxo array:\n\n";

	const int e = 8;
	char array2[e][e];

	for (int i = 0; i < e; i++) {
		for (int j = 0; j < e; j++) {
			if (i % 2 != 0 && j % 2 != 0) {						// if rows and columns are off, store an x
				array2[i][j] = 'X';
			}
			else if (i % 2 == 0 && j % 2 == 0) {				// if rows and columns are even, store an x
				array2[i][j] = 'X';
			}
			else {
				array2[i][j] = 'O';
			}
		}
		cout << endl;
	}

	for (int i = 0; i < e; i++) {
		for (int j = 0; j < e; j++) {
			cout << array2[i][j] << " ";
		}
		cout << endl;
	}
	*/

	// 8 -----------------------------------------
	cout << "\n\n8. 4x5 Random array:\n\n";

	int randArray[4][5];
	srand(time(NULL));

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			randArray[i][j] = rand() % 90 + 10;
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout << randArray[i][j] << " ";
		}
		cout << endl;
	}

	int col;
	cout << "\nEnter a column to print: ";
	cin >> col;


	for (int j = 0; j < 4; j++) {
		cout << randArray[j][col] << " ";				// Print all row values in specific column
	}													// randArray[0][4]
														// randArray[1][4]
														// randArray[2][4]
														// randArray[3][4]
																			// if I input 4


	cout << endl;
	return 0;
}