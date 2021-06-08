#include<iostream>
using namespace std;

int main() {
	cout << endl;
	/*
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
	*/
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

	// 4.



	cout << endl;
	return 0;
}