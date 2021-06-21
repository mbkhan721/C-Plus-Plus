#include<iostream>
#include<time.h>							// required for a time based random number seed
using namespace std;

// 1.
int roll(int diceSides) {
	return rand() % diceSides + 1;			// return a random number between 1 and nsides inclusive
}

// overloaded roll()
int roll(int diceSides, int numRolls) {		// overloaded roll function (different parameter list)
	int sum = 0;

	for (int i = 0; i < numRolls; i++) {	// roll the diceSides dice, numRoll times
		sum += roll(diceSides);				// calls the original roll function to roll a single die 
	}
	return sum;								// return the sum of all dice rolls
}

// 2.
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void sort(int &a, int &b, int &c) {			// if argument is 3 4 5
	if (a < b) {
		swap(a, b);							// 4 3 5
	}
	if (b < c) {
		swap(b, c);							// 4 5 3
	}
	if (a < b) {
		swap(a, b);							// 5 4 3
	}
	
}


/*
// ------------------------------------------------------------------------------------------------------
int main() {

	srand(time(NULL));

	// 1.
	cout << "\n1. Emulate the rolling of dice:\n\n";
	cout << "6-sided: " << roll(6) << endl;						// call the original roll function
	cout << "12-sided: " << roll(12) << endl;					// call the original roll function
	cout << "20-sided: " << roll(20) << endl << endl;					// call the original roll function

	cout << "3d7: " << roll(5, 6) << "\n";						// call the overloaded roll function
	cout << "2d8: " << roll(6, 6) << "\n";						// call the overloaded roll function
	cout << "4d5: " << roll(3, 4) << "\n";						// call the overloaded roll function


	// ----------------------------------------------------- 2.
	cout << "\n\n2. Emulate the rolling of dice:\n\n";

	int a, b, c;
	cout << "Enter three different integers: ";
	cin >> a >> b >> c;

	cout << a << " " << b << " " << c << "\n";					// before
	sort(a, b, c);												// call the sort function
	cout << a << " " << b << " " << c << "\n";					// after

	cout << endl;
	return 0;
}
*/