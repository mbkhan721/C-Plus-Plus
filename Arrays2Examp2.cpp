#include<iostream>
using namespace std;
/*
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

void append(int* a, const int& CAPACITY, int& size, int value) {			// a is the pointer, Size is PASS BY REFERENCE
	if (size < CAPACITY) {													// Functions that adds data, I have to check capacity because I have to make sure that I don't exceed capacity
		a[size] = value;													// Go to index 6 in the array and assign it the value 51
		++size;																// Increment size to 6, since 51 was added to the array
	}
}

void deleteLast(int& size) {												// Size is PASS BY REFERENCE
	if (size > 0) {															// If array is not empty
		--size;																// Decrement size
	}																		// Functions that remove data, I don't need to worry about capacity because I'm not going to exceed it
}

void deleteFirst(int* a, int& size) {										// a is the pointer, size is pass by reference
	if (size > 0) {															// if array is not empty
		for (int i = 0; i < size-1; i++) {									// shift left ( iterate from 0 to size-2 )
			a[i] = a[i + 1];												// current = next
		}																	
		--size;					// Decrement size by 1 after the inner loop														
																			// Why iterate to size-2?
	}																		// Because if I iterate to size - 1, and curr = next, 
}																			// I'm gonna copy one garbage value into my array.

void inserAt(int* a, const int CAPACITY, int& size, int index, int value) {	
	if (size < CAPACITY && index >= 0 && index <= size) {					// if there is room and index is legal
		for (int i = size; i > index; --i) {								// shift right ( iterate from 5 to 3 )
			a[i] - a[i - 1];												// current = previous
		}
		a[index] = value;													// store value at index
		++size;																// increment size
	}
}
// inserAt()
// if ()
// size < CAPACITY		-- is 4 < 10?	--	Yes
// && index >= 0		-- is 3 >= 0?	--	Yes
// && index <= size		-- is 3 <= 4?	--	Yes	-- Why not size-1? Because I can potentially insert past the array.
// 
// for()
// i = size;			-- i = 4		--	i starts at the end and work its way down. 
//											i starts at what the size is, here it's 4
//											Start from the end and copy from previous to current (5 to 4)
//											previous to current (4 to 3)
//											previous to current (3 to 1)
//											This way I don't lose my data
// 
// i > index;			-- i > 3		--	i iterates to to one greater than index.
//											The index I'm looking for is 3.
//	
//											So I start at index 4 or the end of the array which is blank ( i = 4 )
//											array = a{10 15 20 25}
//											since current = previous ( a[i] - a[i - 1] )
//											blank = 25 ( index 4 = 25 )
//											since i > index and my index is 3 i stops the loop and shifts just one element to the right
//											At this point, we have a hole on our data
//											The inner loop ends and a[index] = value 
//											21 is assigned to index 3 or a[3] = 21
//											
// --i;					-- Decrement i	--	i dercrements by 1
//
// a[i] - a[i - 1]		-- current = previous
//
// a[index] = value		-- a[3] = 21 
//
// ++size				-- size = 5


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
	


	// ----------------------------------- PARTIALLY FILLED ARRAY: DELETE LAST

	// Removes the last value in the array
	cout << "\n\nPrinting out array after deleteLast() function is called.\nIt deletes the last value\n";
	deleteLast(size);
	printA(a, size);
	cout << "\n\nIf I print out printA(a, 6); instead of printA(a, size); I'll still see 51\n";
	cout << "Because we didn't delete 51, we just removed access to 51.\n";
	printA(a, 6);



	// ----------------------------------- PARTIALLY FILLED ARRAY: DELETE FIRST -- SHIFT LEFT

	// Delete the fist value in the array
	// DELETE FIRST shifts the elements in the array because if you remove the first element in the array,
	// you can't have any holes in the data.
	// Meaning you can't leave any blank spaces in the array
	// Unlike DELETE LAST, DELETE FIRST does a proper deletion, meaning you can't access the data after it's deleted.

	cout << "\n\nPrinting out array after deleteFIRST() function is called.\n";
	deleteFirst(a, size);
	printA(a, size);



	// ----------------------------------- PARTIALLY FILLED ARRAY: INSERT AT -- SHIFT RIGHT

	// Insert a value in a specific index in an array
	// Current array = a{10 15 20 25}
	// I want to put 21 between 20 and 25
	// Or I want to put 21 at index 3
	// That means that 25 has to shift right by 1

	cout << "\n\nPrinting out array after insertAt() function is called.\n";
	cout << "Added 21 at index 3 of the array:\n";

	// So I send the function the array, the CAPACITY because I want to make sure that I have enough room.
	// I send the size, which will be by reference because we want the fucntion to update the size when we add an element.
	// I'm sending the position where I want to store the data and then I send the actual data that I want to store.
	inserAt(a, CAPACITY, size, 3, 21);
	printA(a, size);
	// Current array = a{10 15 20 21 25}


	cout << endl;
	return 0;
}
*/