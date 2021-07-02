#include<iostream>
#include<time.h>
using namespace std;

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



int main() {

	// ------------------------------- 1
	cout << "\n1. Queen and chessboard:\n\n";

	const int D1 = 8;					// Initializing a const size
	int q[D1] = { 0,4,2,5,6,7,1,3 };	// Implementing a 1D array
	
	chessBoard(q, D1);					// Calling the chessBoard function



	// ------------------------------- 2
	cout << "\n\n2.\n\n";

	srand(time(NULL));
	const int SIZE = 5;
	int a[SIZE] = { 5, 1, 4, 9, 5 };

	cout << "Original: ";
	print(a, SIZE);
	offset(a, SIZE);
	cout << "\nOffset: ";
	print(a, SIZE);


	// ------------------------------- 3







	cout << endl;
	return 0;
}