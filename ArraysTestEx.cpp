#include<iostream>
using namespace std;
/*
int main() {

	// 1a) Explain or calculate how to determine the memory address of an 
	// array value given the array address and a value index
	// 
	// If address of the array is given, it is the same the the first value of the array.
	// If address is not given, we can cout << nameOfTheArray << to get the memory address of
	// the array whhich is the same as the first value of the array. 
	// From there we can calculate as follow...
	// array memory address + (size of type * index)


	// 1b) Explain contiguous memory and how it relates to calculating memory 
	// addresses for array values.
	//
	// A contiguous memory is consecitive memory. Every value is right next to each other.
	// So if we are calculating memory address of the array, we can 
	// start from a60, a64, a68, a6c, a70, a74, a78, a7c, a80 and so on.

	// 1c) Identify and explain problems with simple array code.
	// If size of the array is not constant, it will likely cause errors. Then if we 
	// manually create arrays, it is very time consuming. Therefore, it is important to
	// use loops and nested loops to polulate and print arrays.

	// 1d) Write simple code to initialize and print arrays including partially filled arrays. 
	// int a[3] = { 1, 5, 8 }; // Initializing array 'a'
	// int b[5] = { 1, 5, 8 }; // Initializing partially filled array 'b'
	// 	   Print arrays to be found out
	


	// -------------------------------------- 1.
	cout << "\n1. " << "\n";

	// 92a8
	// 9

	// 1d)
	//int a[3] = { 1, 5, 8 };
	//cout << a << " ";

	// -------------------------------------- 2.
	cout << "\n2. " << "\n";

	// 1. Write one line of code to print the 3rd value in the array.
	// cout << a[2] << endl;
	
	// 2. Write a loop to print the array.
	// for (int i=0; i<SIZE; i++) {
	//		cout << a[i] << " ";
	// }

	// 3. Write what the loop prints to the console.
	// 34 2 9 73 69 0 0 0 0 0


	// -------------------------------------- 3.
	cout << "\n\n3. " << "\n";

	// 1. Write a few lines of code to locate and print all multiples of 3 in an array of integers.
	// for (int i=0; i<6; i++) {
	//		if (a[i] % 3 == 0) {
	//			cout << a[i] << " ";
	//		}
	// }
	int a[] = { 10, 6, 2, 3, 36, 79 };
	for (int i = 0; i < 6; i++) {
		if (a[i] % 3 == 0) {
			cout << a[i] << " ";
		}
	}


	// -------------------------------------- 4.
	cout << "\n\n4. " << "\n";

	char b[2][3] = { {'H','E','O'}, {'B','I','N'} };

	// 1. Write a loop to print the word ON from the 2D array.
	for (int r = 0; r < 2; r++) {
		cout << b[r][2];								// print out the 3rd column
	}

	// 2. Write a loop to print the word BIN from the 2D array.
	cout << "\n";
	for (int c = 0; c < 3; c++) {
		cout << b[1][c];								// print out the 2nd row
	}


	// -------------------------------------- 5.
	cout << "\n\n5. " << "\n";

	string c[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				c[i][j] = "0";
			}
			else {
				c[i][j] = "x";
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	return 0;
}
*/