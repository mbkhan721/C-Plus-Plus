#include<iostream>
#include<time.h>
using namespace std;
/*
void swap(char &e1, char &e2) {
	char temp = e1;
	e1 = e2;
	e2 = temp;
}

int main() {
	
	// -------------------------------------- 1.
	cout << "\n1. " << "\n";
	int a[5];								// declare an array of 5 integers

	for (int i = 0; i < 5; i++) {
		cout << "[" << i << "] = ";
		cin >> a[i];						// input values from the console into the array
	}
	cout << "\nArray: ";
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";				// loop to output the array
	}

	int min = a[0];
	for (int i = 1; i < 5; i++) {			// iterate from the second to last value of the array
		if (min > a[i]) {					// if the current min is larger then the current value
			min = a[i];						// replace min with the current value
		}
	}
	cout << "\nMin: " << min << endl;		// determine the smallest element in the array.

	int max = a[0];
	for (int i = 1; i < 5; i++) {			// iterate from the second to last value of the array
		if (max < a[i]) {					// if the current max is smaller then the current value
			max = a[i];						// replace max with the current value
		}
	}
	cout << "\Max: " << max << endl;		// determine the largest element in the array.
	


	// -------------------------------------- 2.
	cout << "\n2. " << "\n";

	const int SIZE = 26;
	char alphabet[SIZE];

	for (int i = 0; i < SIZE; i++) {										// Populating the array with alphabets
		alphabet[i] = i + 'A';
	}
	cout << "Original: ";
	for (int i = 0; i < SIZE; i++) {										// Printing the original array
		cout << alphabet[i] << " ";
	}
	cout << endl;															// Swapping the array content
	for (int i = 0, j = SIZE - 1; i < SIZE / 2; i++, j--) {					// i starts form left to the middle, j starts from length - 1
		swap(alphabet[i], alphabet[j]);										// i increments and j decrements
		cout << "i = " << i << " j = " << j << endl;						
	}																		 
	cout << "\nReversed: ";													// Printing the reversed array
	for (int i = 0; i < SIZE; i++) {
		cout << alphabet[i] << " ";
	}
	


	// -------------------------------------- 3. 
	cout << "\n3. " << "\n";
	const int D1 = 7;
	const int D2 = 20;
	string flag[D1][D2];

	for (int r = 0; r < D1; r++) {
		for (int c = 0; c < D2; c++) {
			if (r <= 3 && c < 7) {
				flag[r][c] = "* ";
			}
			else if (r % 2 == 0) {											// If rows are even, print "="
				flag[r][c] = "= ";
			}
			else {
				flag[r][c] = "- ";
			}			
		}
	}
	for (int r = 0; r < D1; r++) {
		for (int c = 0; c < D2; c++) {
			cout << flag[r][c] << " ";
		}
		cout << "\n";
	}
	


	// -------------------------------------- 4.
	cout << "\n4. " << "\n";
	const int R = 4;
	const int C = 4;
	int integers[R][C];
	srand(time(NULL));

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			integers[i][j] = rand() % 16 + 10;
		}
	}
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cout << integers[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\nRow 2: ";
	for (int col = 0; col < C; col++) {
		cout << integers[1][col] << " ";
	}
	cout << "\nCol 3: ";
	for (int row = 0; row < R; row++) {
		cout << integers[row][2] << " ";
	}
	cout << "\nDiagonal 1: ";
	for (int i = 0, c = 0; i < R; i++, c++) {
		if (i == c) {
			cout << integers[i][c] << " ";
		}
	}
	cout << "\nAnother way to print Diagonal 1: ";
	for (int i = 0; i < C; i++) {
		cout << integers[i][i] << " ";
	}
	cout << "\nDiagonal 2: ";
	for (int i = 0; i < R; i++) {
			cout << integers[i][R-i-1] << " ";							// One dimention counts up, other counts down
	}																	// 0,3
																		// 1,2
																		// 2,1
																		// 3,0
																		// Loops goes as follows
																		// i = 0; R < 4; i++
																		// R i 1
																		// 4-0-1 = 3
																		// 4-1-1 = 2
																		// 4-2-1 = 1
																		// 4-3-1 = 0
	// Hint: Recall that loops can have multiple initializations, conditions and
	// increment changes such as :
	// for(int i=5, j=2; i>=0 && j<10; i--, j++) { loop code; }

	
	cout << endl;
	return 0;
}
*/