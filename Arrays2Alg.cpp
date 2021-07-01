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
int toByte(int* a, int size) {				// Start out with 8
	if (size == 1) {						// Base case: When size is 1,
		return a[size -1];					// Return a[0]
	}
	return toByte(a, size -1) * 10 + a[size - 1];	// Everytime we recurse, we reduce the size
}													// until size == 1

// Tracing the toByte() function above
//
//
//	toByte(a, 8)
//		toByte(a, 7)
//			toByte(a, 6)
//				toByte(a, 5)
//					toByte(a, 4)
//						toByte(a, 3)
//							toByte(a, 2)
//								toByte(a, 1)	returns a[0]
//							toByte(a, 2)	returns a[0] * 10 + a[1]	LEFT SHIFT and ADD 1
//						toByte(a, 3)	returns (a[0] * 10 + a[1]) * 10 + a[2]	RETURNS ALL OF WHAT WE DID IN PREVIOUS RETURN, LEFT SHIFTED PLUS A2
//					toByte(a, 4)	ALL OF WHAT WE DID IN PREVIOUS RETURN, LEFT SHIFTED PLUS A3
//				toByte(a, 5)	ALL OF WHAT WE DID IN PREVIOUS RETURN, LEFT SHIFTED PLUS A4
//			toByte(a, 6)	ALL OF WHAT WE DID IN PREVIOUS RETURN, LEFT SHIFTED PLUS A5
//		toByte(a, 7)	ALL OF WHAT WE DID IN PREVIOUS RETURN, LEFT SHIFTED PLUS A6
//	toByte(a, 8)	ALL OF WHAT WE DID IN PREVIOUS RETURN, LEFT SHIFTED PLUS A7


// --------------------------------------------- 4

void initD(int* a, const int& SIZE) {
	for (int i = 0; i < SIZE; i++) {
		a[i] = rand() % SIZE;
	}
}
void deleteEvens(int* a, int& size) {				// Size must be PASS BY REFERENCE because it is updated
	for (int i = 0; i < size; i++) {
		if (a[i] % 2 == 0) {						// If current element is even
			for (int j = i; j < size - 1; j++) {	// Shift the array to delete the element
				a[j] = a[j + 1];					// Copy next to current
			}
			--size;									// Reduce size to reflect deletion
			--i;									// Start again from the new current element
		}											// If you dont bring back i by 1, we'll miss
	}												// the next even number
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
	cout << "\n3. Recursive function to turn array into a number:\n";

	const int CAP = 8;
	int c[CAP];						// Declaring array
	
	initC(c, CAP);					// Calling func to initialize
	cout << "Array: \n";
	print(c, CAP);					// Print the array
	
	cout << "\nNumber: \n" << toByte(c, CAP);	// Calling the recursive function


	// --------------------------------------------- 4
	cout << "\n\n4.\n";

	const int Capacity = 100;		// Setting the capacity to 100
	int d[Capacity];				// Declaring array

	int size =0;						// Declaring size
	cout << "Enter a size greater than 10 and less than 100: ";
	cin >> size;

	initD(d, size);					// Calling func to initialize
	print(d, size);					// Print the array
	
	deleteEvens(d, size);			// Calling func to delete evens
	print(d, size);					// Print the array





	cout << endl;
	return 0;
}