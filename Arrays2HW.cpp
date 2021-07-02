#include<iostream>
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

int main() {

	// ------------------------------- 1
	cout << "\n1.\n";

	const int D1 = 8;					// Initializing a const size
	int q[D1] = { 0,4,2,5,6,7,1,3 };	// Implementing a 1D array
	
	chessBoard(q, D1);					// Calling the chessBoard function








	cout << endl;
	return 0;
}