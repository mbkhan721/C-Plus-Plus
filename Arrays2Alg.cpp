#include<iostream>
#include<time.h>
using namespace std;

// --------------------------------------------- 1
void init(int* a, const int& SIZE) {
	for (int i = 0; i < SIZE; i++) {
		a[i] = rand() % SIZE;
	}
}
void print(int* a, const int& SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
}
double averageDiff(int *a, const int& SIZE) {
	double sum = 0;
	double num = 0;
	for (int i = 1; i < SIZE; i++) {
		sum = a[i] - a[i - 1];							// Current - Previous
		//sum = a[i+1] - a[i];							// Next - Current
		if (sum < 0) {
			sum = -sum;
		}
		num += sum;
	}	
	return num / (SIZE - 1);
}

// --------------------------------------------- 2

void initialize(int* a, const int& SIZE) {
	for (int i = 0; i < SIZE; i++) {
		a[i] = rand() % SIZE;
		for (int j = 0; j < i; j++) {					// Inner loop checks for duplicates
			if (a[i] == a[j]) {							// If duplicate found, get a new value for index i
				--i;
				break;
			}
		}
	}
}

// --------------------------------------------- 3

void initC(int* a, const int& SIZE) {
	for (int i = 0; i < SIZE; i++) {
		a[i] = rand() % 2;
	}
}
int toByte(int* a, const int& SIZE) {
	if (SIZE == 1) {
		return;
	}
}


int main() {

	// --------------------------------------------- 1
	cout << "\n1. Calculating the average gap between elements:\n";

	srand(time(NULL));
	const int SIZE = 10;
	int a[SIZE];					// Declaring array

	init(a, SIZE);					// Calling func to initialize
	print(a, SIZE);					// Print the array

	cout << "Average gap = " << averageDiff(a, SIZE);


	// --------------------------------------------- 2
	cout << "\n\n2. Printing array with unique values:\n";

	int b[SIZE];					// Declaring array
	initialize(b, SIZE);			// Calling func to initialize
	print(b, SIZE);					// Print the array


	// --------------------------------------------- 3
	cout << "\n3.\n";

	const int CAP = 8;
	int c[CAP];						// Declaring array
	
	initC(c, CAP);					// Calling func to initialize
	print(c, CAP);					// Print the array


	cout << endl;
	return 0;
}