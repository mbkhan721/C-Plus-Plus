#include<iostream>
#include<time.h>
using namespace std;

void swap(char &e1, char &e2) {
	char temp = e1;
	e1 = e2;
	e2 = temp;
}

int main() {
	/*
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
	*/


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







	cout << endl;
	return 0;
}