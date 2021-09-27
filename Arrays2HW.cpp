#include<iostream>
#include<time.h>
using namespace std;
/*
// ------------------------------- 1

void chessBoard(int* a, const int& SIZE) {
	for (int i = 0; i < SIZE; i++) {			// iterate through array indexes (row values)
		for (int j = 0; j < SIZE; j++) {		// iterate through possible array values (column values)
			if (a[i] == j) {					// current == the value of j 
				cout << "Q ";
			}
			else {
				cout << ". ";
			}
		}
		cout << "\n";
	}
}

// ------------------------------- 2

void offset(int* a, const int& SIZE) {
	for (int i = 0; i < SIZE; i++) {
		a[i] += rand() % 11 - 5;
	}
}

void print(int* a, const int& SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << a[i] << " ";
	}
}

// ------------------------------- 3

bool hasValue(int* a, const int& SIZE, int n) {
	for (int i = 0; i < SIZE; i++) {
		if (a[i] == n) {
			return true;
		}
	}
	return false;
}

void randArray(int* a, int & size, const int& CAP) {
	a[0] = rand() % 10;							// store a random value at a[0]
	++size;										// increment size since we added the first value
	for (int i = 1; i < CAP; i++) {				// iterate from second value to end
		a[i] = rand() % 10;						// generate a new random value for current i
		while ( hasValue(a, size, a[i]) ) {		// check if the new random value is a duplicate of a previous value
			a[i] = rand() % 10;					// if so, create a new one and check this one
		}
		++size;									// if unique value was created, increment size and move to next value
	}
}



int main() {

	// ------------------------------- 1
	cout << "\n1. Queen and chessboard:\n\n";

	const int D1 = 8;					// Initializing a const size
	int q[D1] = { 0,4,2,5,6,7,1,3 };	// Implementing a 1D array
	
	chessBoard(q, D1);					// Calling the chessBoard function



	// ------------------------------- 2
	cout << "\n\n2. Randomly modifies each element by up to +/- 5.\n\n";

	srand(time(NULL));
	const int SIZE = 5;
	int a[SIZE] = { 5, 1, 4, 9, 5 };

	cout << "Original: ";
	print(a, SIZE);
	offset(a, SIZE);
	cout << "\nOffset: ";
	print(a, SIZE);


	// ------------------------------- 3
	cout << "\n\n3.\n\n";

	const int CAP = 10;					// potential number of elements in the array (10 integers)
	int b[CAP];							// partially filled array
	int actualSize = 0;					// number of values is 0 because array is currently empty

	randArray(b, actualSize, CAP);
	print(b, actualSize);
	




	cout << endl;
	return 0;
}
*/