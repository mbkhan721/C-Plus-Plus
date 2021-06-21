#include<iostream>
using namespace std;
/*
int main() {

	// ARRAYS is a data structure or collection of similar type variables

	int nums[10] = { 13, 20, 38, 45, 56, 67, 72, 83, 94, 100 };
	// initializing an array of size 10

	cout << "\nPrinting the first index of the 'num' array:\n" << nums[0]; // Prints the first index, 13

	// --------------------------------------------------------- ARRAY INITIALIZATION

	// int nums[3];					Declaring an array of size 3 (contains garbage if printed)
	// int nums[3] {};				Initialize an array or size 3 with DEFAULT integer values (contains 0,0,0 if printed)
	// int nums[] = {4, 2, 9};		Initialize an array of size 3 with values (contains 4, 2, 9 if printed)
	// int nums[10] = {4, 2, 9};	Partially initialize an array of size 10 with some values (contains 4, 2, 9, 0, 0, 0, 0, 0, 0, 0 if printed)


	cout << "\nPrint the entire array in a for loop:\n";
	for (int i = 0; i < 10; i++) {
		cout << nums[i] << " ";
	}

	// --------------------------------------------------------- ARRAY ASSIGNMENT

	nums[2] -= 8;
	cout << "\n\nSubtracted 8 from 38:\n" << nums[2] << endl;


	// --------------------------------------------------------- CONSTANTS FOR SIZE

	// use a constant for size to avoid errors and simplify program updates
	// constant can be useful to modify the size of an array if it is used in multiple places

	const int SIZE = 10;
	int a[SIZE] = { 9, 7, 21, 4, 26, 8, 14, 16, 11, 18 };

	cout << "\n\nUsing a constant in array 'a' and using a loop to modify the variable at index 0:\n";
	for (int i = 0; i < SIZE; ++i) {
		a[0] = 36;
		cout << a[i] << " ";
	}

	// --------------------------------------------------------- ARRAYS MEMORY

	// memory addresses are in hexadecimal
	// hexadecimal values range from: 0-9, A-F
	// 
	//	A		10 in decimal
	//	B		11 in decimal
	//	C		12 in decimal
	//	D		13 in decimal
	//	E		14 in decimal
	//	F		15 in decimal
	//
	//	The ampersand symbol before the variable name returns the memory address


	// nums stores the memory address of the first element in the array
	// array memory address + (size of type * index)
	// 9A60 + (4 * 3) is 9A6C, the address of the element at index 3


	//	Index		0		1		2		3		4		5		6		7		8		9	
	//	Value		10		20		30		40		50		60		70		80		90		100
	//	Memory		9A60	9A64	9A68	9A6C	9A70	9A74	9A78	9A7C	9A80	9A84	

	// Because we are going from 12 to 16, the last digit resets to 0 and the 
	// second to last digit increments by 1 because hexadecimal values range from 0 - 15

	// EACH ELEMENT TAKES UP 4 BYTES BECAUSE AN INTEGER IS 4 BYTES

	cout << "\n\nPrinting the memory address of 'a' array:\n" <<
		a << endl;
	cout << "\nIt is also the memory address of the first element in the array.\n";

	cout << "\nMemory address and value for each i the array:\n";
	for (int i = 0; i < SIZE; ++i) {
		cout << &(a[i]) << " " << a[i] << endl;				// Print memory address and value for each i the array
	}
	cout << endl;


	// --------------------------------------------------------LOGICAL ERROR

	// Accessing memory before the array
	// cout << a[-3];	Will print out garbage
	// Accessing memory after the array
	// cout << a[12];	Will print out garbage


	// Data corruption
	// Overwrite memory that is not in the array
	// a[-3] = 80;


	string s = "Hello";

	char b[] = { 'A', 'B', 'C', 'D', 'E' };

	//for (int i = 0; i < 10; i++) {		// i<10 will print the array, but it will also print garbage 
											// for the remainder length because the array is 5 chars
	for (int i = 0; i < 5; i++) {
		cout << b[i] << "\n";
	}
	cout << endl;


	// -------------------------------------------------------- C-STRING

	// older method of storing strings (before std::string) as character arrays
	// arrays have an extra null character ‘\0’ as the last element

	// c-string end with a hidden null character '\0'

	char cString[] = "C++ program";					// initialize a c-string of size 6 (adds null char at end)
	cout << "This is a c-string array:\n" << cString << endl << endl;


	cout << "Using a while loop to print the c-string:\n";
	int i = 0;
	while (cString[i] != '\0') {					// iterate until you reach the null character '\n'
		cout << cString[i];
		++i;
	}

	cout << endl;

	// c-strings are special types of arrays that are meant to store string data.
	// This is how strings were stored in c language



	// ---------------------------------------------------------------- TWO-DIMENSIONAL ARRAYS

	// arrays which contain a second dimension of data

	int c[2][3] = { {1,5,2}, {9,3,4} };				// Initialize a 2x3 array

	cout << "\n\nPrinting out 2d array:\n";
	for (int i = 0; i < 2; ++i) {					// iterate from 0 to 1 (1st dimension)
		for (int j = 0; j < 3; ++j) {				// iterate from 0 to 2 (2nd dimension)
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
	cout << endl << endl;

	// It will print out as follows
	//
	//		0	 1		2
	//    ----------------|
	//	0 |	1	 5		2			First dimention array
	//	  | 
	//	1 |	9	 3		4			Second dimention array
	//


	cout << "Print 3rd element of the 2nd dimention:\n";
	cout << c[1][2] << endl << endl;


	int matrix[2][3];								// Declare a 2x3 two-dimension array

	matrix[0][0] = 5;
	matrix[0][1] = 8;
	matrix[0][2] = 2;
	matrix[1][0] = 7;
	matrix[1][1] = 0;
	matrix[1][2] = 1;

	cout << "Matrix Array:\n";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	// In memory, it is not stored as a square, it is stored as a contiguous line.
	// Contiguous means every element is next to the other one, there are no spaces.
	// The indexing works differently here than it works in a one-dimension array
	// Both one and two dimension arrays are very quick no matter how large the array is.
	

	const int D1 = 2;
	const int D2 = 3;

	int d[D1][D2] = { {1,2,3}, {4,5,6} };

	cout << "\n\nPrinting the memory address of the array and the first element:\n" <<
		d << endl << endl;

	for (int i = 0; i < D1; i++) {
		for (int j = 0; j < D2; j++) {
			cout << "Memory address of 'd' array: " << 
				&d[i][j] << " Value: " << d[i][j] << endl;
		}
	}


	cout << endl;
	return 0;
}
*/