#include<iostream>
using namespace std;

int nla() {
	cout << endl;
	/*
	// 1.
	cout << "\n1.\n";

	int n;
	cout << "Enter n: ";
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (i == j) {
				cout << "* ";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	

	// 2.
	cout << "\n2.\n";

	int m;
	cout << "Enter m: ";
	cin >> m;

	for (int r = 1; r <= m; ++r) {
		for (int c = 1; c <= m; ++c) {
			if (c == m -r + 1) {
				cout << "* ";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	
	
	// 3.
	cout << "\n3.\n";
	int o = 5;

	for (int r = 1; r <= o; ++r) {
		for (int c = 1; c <= o; ++c) {
			if (c <= r) {
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	

	// 4.
	cout << "\n4.\n";
	int p = 5;

	for (int r = 1; r <= p; ++r) {			// printing out a square
		for (int c = 1; c <= p; ++c) {
			if (c <= p - r + 1) {
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}

	cout << "\n4b.\n";						// printing out a triangle
	for (int r = 1; r <= p; r++) {
		for (int c = 1; c <= p - r + 1; c++) {
			cout << "*";
		}
		cout << endl;
	}

	// 5.
	cout << "\n5.\n";
	p = 5;

	for (int r = 1; r <= p; ++r) {
		for (int c = 1; c <= p; ++c) {
			if (c >= p - r + 1) {
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	

	// 6.
	cout << "\n6.\n";
	int p = 5;

	for (int r = 1; r <= p; r++) {
		for (int c = 1; c <= p; c++) {
			if (c >= r) {
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	

	// 7.
	cout << "\n7.\n";
	int p = 5;

	for (int r = 1; r <= p; r++) {
		for (int c = 1; c <= 2 * p - 1; c++) {
			if ((c >= r) && (c <= 2 * p - r)) {
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}

	// 8.
	cout << "\n8.\n";
	p = 5;

	for (int r = 1; r <= p; r++) {
		for (int c = 1; c <= 2 * p - 1; c++) {
			if ((c >= p - r + 1) && (c <=  p + r - 1)) {
				cout << "*";
			}
			else 
				cout << " ";
		}
		cout << endl;
	}


	// 9.
	cout << "\n9.\n";
	p = 4;

	for (int r = 1; r <= p; r++) {
		for (int d = 1; d <= p; d++) {
			for (int c = 1; c <= p; c++) {
				if (r == c) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		cout << endl;
	}


	// 10.
	cout << "\n10.\n";
	p = 4;

	for (int r = 1; r <= p; r++) {
		for (int d = 1; d <= p; d++) {
			for (int c = 1; c <= p; c++) {
				if (r == c && d % 2 != 0) {
					cout << "*";
				}
				else if (d % 2 == 0 && c == p - r + 1) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	


	// 11.
	cout << "\n11.\n";
	int p = 5;

	for (int v = 1; v <= p; v++) {
		for (int r = 1; r <= p; r++) {
			for (int c = 1; c <= p; c++) {
				if (v % 2 != 0 && c <= r) {
					cout << "*";
				}
				else if (v % 2 == 0 && c <= p - r + 1) {
					cout << "*";
				}
				else
					cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	*/

	cout << endl;
	return 0;
}