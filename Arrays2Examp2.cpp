#include<iostream>
using namespace std;

const int TYPES = 3;			// Global Constant: A constant that is declared before main()
const int BRANDS = 4;			// That means I can access it anywhere in the program

void print(string dr[], string br[][BRANDS]) {
	for (int i = 0; i < TYPES; i++) {
		cout << dr[i] << ": ";								// Printing out the 1st dimension drinks[]
		for (int j = 0; j < BRANDS; j++) {
			cout << br[i][j] << ", ";						// The inner loop prints out i by j
		}
		cout << "\n";
	}
}

void printA(int *a, const int &SIZE) {						// Passing size by reference, but it's a constant reference, it can't be changed
	for (int i = 0; i < SIZE; i++) {
		cout << a[i] << " ";
	}
}

void append(int* a, const int& CAPACITY, int& size, int value) {					// Size is PASS BY REFERENCE
	if (size < CAPACITY) {
		a[size] = value;
		++size;
	}
}


int main() {

	cout << "\n1 Dimension and 2 Dimension Arrays Combined.\n\n";
	// The index in the first array is equivalent to a type in the 2nd array.

	string drinks[TYPES];								// 1D array

	drinks[0] = "Water";
	drinks[1] = "Soda";
	drinks[2] = "Alcohol";

	string brands[TYPES][BRANDS];						// 2D array / 3x4

	brands[0][0] = "Avian";
	brands[0][1] = "Aquafina";
	brands[0][2] = "Poland";
	brands[0][3] = "Nestle";

	brands[1][0] = "Coke";
	brands[1][1] = "Pepsi";
	brands[1][2] = "Sprite";
	brands[1][3] = "Gingerale";

	brands[2][0] = "Vodka";
	brands[2][1] = "Taquilla";
	brands[2][2] = "Gin";
	brands[2][3] = "Whiskey";

	print(drinks, brands);			// Size is not included because we went around it by creating global variables.
	// This is a combination of 2 string arrays, it can also be string, int or string, double
	


	// ----------------------------------- PARTIALLY FILLED ARRAY

	// PARTIALLY FILLED ARRAY: an array that is not filled with values.
	// When you alocate size of an array to 10 and add 4 values to it is a partially filled array.

	const int CAPACITY = 10;										// Maximum number of values in the array (allocated memory)
	int a[CAPACITY] = { 5, 10, 15, 20, 25 };						// Partially filled array
	int size = 5;													// Current number of values

	// If I print out the entire array, it will print out the 5 values and 5 0's because the capacity of the array is 10
	// But if I use the size variable to print out the array, size is the size of our data set within the array. It will
	// print out just the 5 values.

	// PARTIALLY FILLED ARRAY is an array that requires two variables aside from the array itself.
	// It requires capacity, which is the maximum number of values in the array. POTENTIAL
	// And then we have a size variable, which is the current number of values in the array.

	cout << "\n\nPrinting out array a:\n";
	printA(a, size);												// If I enter CAPACITY as an argument, I'll get five 0's with the array
	


	// ----------------------------------- PARTIALLY FILLED ARRAY: APPEND

	// Store value at the end of the array 
	cout << "\n\nPrinting out array after the append function is called:\n";
	append(a, CAPACITY, size, 51);									// Calling the append function to append 51 to the array
	printA(a, size);												// Printing the array





	cout << endl;
	return 0;
}