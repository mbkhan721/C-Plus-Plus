#include<iostream>
#include<time.h>
using namespace std;
/*
int main() {
	
	// ------------------------------------- 1.
	cout << "\n1. Locate and print the largest element in the array \n";
	srand(time(NULL));

	const int D1 = 20;
	int a[D1];
	for (int i = 0; i < 20; i++) {
		a[i] = rand() % 101;
	}
	for (int i = 0; i < 20; i++) {
		cout << a[i] << " ";
	}

	int max = a[0];
	for (int i = 0; i < 20; i++) {
		if (max < a[i]) {
			//cout << "\nIs max(" << max << ") less than " << a[i] << endl;
			max = a[i];
		}
	}
	cout << "\nMax = " << max << endl << endl;


	// ------------------------------------- 2.
	cout << "\n2. Largest difference between two consecutive elements in the array:\n";

	srand(time(NULL));
	const int SIZE = 10;
	int b[SIZE];

	for (int i = 0; i < SIZE; i++) {
		b[i] = rand() % 21;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << b[i] << " ";
	}

	int maxDif = 0;
	for (int i = 1; i < SIZE; i++) {
		int diff = b[i] - b[i - 1];					// current - previous
		if (diff < 0) {
			diff = -diff;							// If difference is a negative number, negate it
		}											// Make it a positive number to get abs value of curr-prev
		if (diff > maxDif) {
			maxDif = diff;							// everytime I find the largest value, I update the maxDiff to that value
		}
	}
	cout << "\nMax diff = " << maxDif << endl << endl;


	// ------------------------------------- 3.
	cout << "\n3. Sum of all even values in the array:\n";

	int c[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			c[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (c[i][j] % 2 == 0) {
				sum += c[i][j];
			}
		}
	}
	cout << "Sum of evens = " << sum << "\n\n";


	// ------------------------------------- 4.
	cout << "\n4. Print the sum of all values in the specified row:\n";

	srand(time(NULL));
	int d[5][5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			d[i][j] = rand() % 90 + 10;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << d[i][j] << " ";
		}
		cout << endl;
	}

	int row;
	cout << "\nEnter a row: ";
	cin >> row;

	int sum = 0;
	for (int c = 0; c < 5; c++) {
		sum += d[row][c];
	}
	cout << "Sum of row " << row << " = " << sum << endl;
	

	// ------------------------------------- 5.
	cout << "\n5.  Copy all values from the specified column of \nthe two - dimensional array to the one - dimensional array:\n";

	int e[3][3];
	int f[3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			e[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << e[i][j] << " ";
		}
		cout << "\n";
	}
	int col;
	cout << "\nSelect a column: ";
	cin >> col;

	for (int c = 0; c < 3; c++) {
			f[c] = e[c][col];
	}

	for (int i = 0; i < 3; i++) {
		cout << f[i] << " ";
	}


	cout << endl;
	return 0;
}
*/