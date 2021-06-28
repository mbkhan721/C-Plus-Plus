#include<iostream>
using namespace std;

// --------------------------------------------- 1

void init(int* a, const int &capacity) {				// Accepts the array by pointer and capacity is constant coz we're not going to change the size
	for (int i = 0; i < capacity; i++) {				// Capacity will also work if it is not a constant
		a[i] = (i * 10) + 10;
		// or
		//a[i] = (i + 1) * 10;
	}
}

void print(int a[], const int &capacity) {				// Capacity will work if it is not a constant, but because we are not going to change the size, it is ok.
	for (int i = 0; i < capacity; i++) {				// Also, it is a good practice to make the array a constant because we are only printing it, we're not changing it.
		cout << a[i] << " ";
	}
}

// --------------------------------------------- 2

void replaceAt(int* a, const int &capacity, int index, int value) {						// We can write the array as int*a || int a[] its the same thing
	if (index >= 0 && index <= capacity) {												// Capacity is again by constant reference because it cannot be changed
		// for (int i = 0; i < capacity; i++) {			// Don't need the for loop
			a[index] = value;
		//}
	}
}

// --------------------------------------------- 3

void init2DArr(int a[][4], int D1, int D2) {			// The size of the second dimension is required
	int n = 10;
	for (int i = 0; i < D1; i++) {
		for (int j = 0; j < D2; j++) {
			a[i][j] = n++;								// After it stores the value 10, it increments by 1
		}
	}
}
void print2DArr(int a[][4], int D1, int D2) {			// The size of the second dimension is required
	for (int i = 0; i < D1; i++) {
		for (int j = 0; j < D2; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}

// --------------------------------------------- 4




int main() {

	// --------------------------------------------- 1
	cout << "\n1. Basic initialiazation and print:\n";
	const int CAPACITY = 10;
	int firstArr[CAPACITY];

	init(firstArr, CAPACITY);			// Initializing the firstArr array
	print(firstArr, CAPACITY);			// Printing the array


	// --------------------------------------------- 2
	cout << "\n\n2. Replacing indexes in the array:\n";
	int secArr[CAPACITY] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	print(secArr, CAPACITY);			// Printing out the original secArray
	replaceAt(secArr, CAPACITY, 4, 40);	// Replacing 4 with 40
	replaceAt(secArr, CAPACITY, 7, 70);	// Replacing 7 with 70
	cout << "\n";
	print(secArr, CAPACITY);			// Printing modified array


	// --------------------------------------------- 3
	cout << "\n\n3. Initializing and printing Two Dimension Array\n";
	
	const int D1 = 3;
	const int D2 = 4;
	int twoDArr[D1][D2];				// Declaring a 2D array
	init2DArr(twoDArr, D1, D2);			// Initializing the array
	print2DArr(twoDArr, D1, D2);		// Printing the array


	// --------------------------------------------- 4



	cout << endl;
	return 0;
}