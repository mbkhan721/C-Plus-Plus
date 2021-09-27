#include<iostream>
using namespace std;

int main() {
	cout << endl;
	
	// square 
	const int DIM = 9;
	for (int r = 1; r <= DIM; ++r) {
		for (int c = 1; c <= DIM; ++c) {
			if (r == DIM / 2 + 1 || c == DIM / 2 + 1)
				cout << "X ";
			else
				cout << "- ";
		}
		cout << endl;
	}
	
	// flag
	
	for (int i = 1; i <= 7; ++i) {
		for (int j = 1; j <= 20; ++j) {
			if (i <= 4 && j <= 7) {
				cout << "*";
			}
			else if (i % 2 == 0) {
				cout << "-";
			}
			else {
				cout << "=";
			}
		}
		cout << "\n";
	}
	
	// 3.
	for (int cal = 1; cal <= 8; ++cal) {
		for (int row = 1; row <= 8; ++row) {
			if (cal % 2 == 1 && row % 2 == 1) {
				cout << "X ";
			}
			else if (cal % 2 == 0 && row % 2 == 0) {
				cout << "X ";
			}
			else {
				cout << "0 ";
			}
		}
		cout << "\n";
	}
	/*
	// 1.
	cout << "\n1.\n";
	const int DIM = 9;
	for (int r = 1; r <= DIM; ++r) {
		for (int c = 1; c <= DIM; ++c) {
			if (r == DIM / 2 + 1 || c == DIM / 2 + 1) {
				cout << "x ";
			}
			else {
				cout << "- ";
			}
		}
		cout << endl;
	}
	*/
	// 2.
	cout << "\n2.\n";
	for (int r = 1; r <= 7; ++r) {
		for (int c = 1; c <= 20; ++c) {
			if (r <= 4 && c <= 7) {
				cout << "*";
			}
			else if (r % 2 == 0) {
				cout << "-";
			}
			else {
				cout << "=";
			}
		}
		cout << endl;
	}

	cout << "\n3.\n";
	for (int row = 1; row <= 8; ++row) {
		for (int col = 1; col <= 8; ++col) {
			if (row % 2 != 0 && col % 2 != 0) {
				cout << "x ";
			}
			else if (row % 2 == 0 && col % 2 == 0) {
				cout << "x ";
			}
			else
				cout << "o ";
		}
		cout << endl;
	}
	

	// 4.
	cout << "\n4.\n";
	const int MID = 5;
	for (int r = 1; r <= MID; ++r) {
		for (int c = 1; c <= MID; ++c) {
			if (r == c) {
				cout << "x";
			}
			else
				cout << "-";
		}
		cout << endl;
	}

	// 5.
	cout << "\n5.\n";
	int d = 8;
	for (int r = 1; r <= d; ++r) {
		for (int c = 1; c <= d; ++c) {
			if (c == d - r + 1) {
				cout << "x ";
			}
			else
				cout << "- ";
		}
		cout << endl;
	}
	

	// 6.
	cout << "\n6.\n";
	int e = 9;
	for (int r = 1; r <= e; ++r) {
		for (int c = 1; c <= e; ++c) {
			if (r == c || c == e - r + 1) {
				cout << "x ";
			}
			else
				cout << "- ";
		}
		cout << endl;
	}

	// 7.
	cout << "\n7.\n";
	int f = 15;
	for (int r = 1; r <= f; ++r) {
		for (int c = 1; c <= f; ++c) {
			if ((r >= f / 2 + 1) && (c == r || c == f - r + 1)) {
				cout << "x ";
			}
			else
				cout << "- ";
		}
		cout << endl;
	}
	

	cout << endl;
	return 0;
}