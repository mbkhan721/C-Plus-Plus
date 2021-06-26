#include<iostream>
using namespace std;

void passArray_1(int a[]) {														// Parameter a is not an array, it is an integer pointer
	cout << "\nFunction 1 - Size of array array: " << sizeof(a) << "\n";		// because it has a size of 4 unlike the array itself which
	cout << "Value of array array: " << a << "\n";								// is 40 bytes. However, the memory address is the same.
}

void passArray_2(int* z) {														// Again, when we send an array to a function, we send a pointer
	cout << "Function 2 - Size of array array: " << sizeof(z) << "\n";			// that points to the first element of the array
	cout << "Value of array array: " << z << "\n\n";							// Both functions we are using a pointer and not an array.
}																				// Its a pointer to the first element of the array, and that's all 
																				// we need to be able to access the arrays inside these functions.
int main() {

	// ----------------------------- POINTER REVIEW
	int x = 5;
	cout << "\nx = " << x << endl;									// Prints 5

	// Store the memory address of x in pointer p
	// dereferencing p returns the variable x
	int* p = &x;
	cout << "Dereferenced *p = " << *p << endl;						// Prints 5

	// Both &x and p will have the same memory address
	// P points to x
	cout << "Memory address of &x: " << &x << "\n";					// Memory address of x
	cout << "Memory address of p: " << p << "\n";					// Memory address of x

	// the value of p is the memory address of x
	


	// ----------------------------- ARRAY REVIEW

	// An array is a collection of data stored as a contiguous block of memory

	// int a[5] = { 10, 20, 30, 40, 50 };

	// a is a variable of type int[5], which is an integer array of size 5
	// a acts as a pointer to the first element a[0]
	// The memory address of a == the memory address of a[0]



	// ----------------------------- MEMORY CONTIGUITY REVIEW

	// The simple method of instantly jumping to locations in array is only possible 
	// because an array is continuous block of memory. 
	// Every cell is adjacent to the next
	// Contiguous block of memory == each value stored next to the previous value

	// Non-Contiguous Block: We use data structures with pointers to be able to jump
	// from one location to another. 
	// Non-contiguous blocks of memory are scattered all over the place



	// ----------------------------- POINTERS AND ARRAYS

	int b[5] = { 10, 20, 30, 40, 50 };
	int* pointer = b;									// we copy the memory address of the
														// first array value into pointer

	cout << "\nMemory address of b:					" << b;
	cout << "\nMemory address of &(b):					" << &(b);
	cout << "\nMemory address of the first element in the array or &(b[0]): " << &(b[0]);
	cout << "\nMemory address of pointer:				" << pointer << "\n";
	cout << "Pointer value is the address of the first value in the array\n";

	// b is still of array type
	// b = int[5]
	// c is still of pointer type
	// c = int*
	// THEY ARE NOT THE SAME THING

	// We can use bracket notations to access array elements either from the 
	// array or we can do it from the pointer

	// The bracket operators can be used for pointers just like for arrays
	cout << "\nAccessing array elements from the array itself:\n" <<
		b[0] << " " << b[1] << "\n";
	cout << "Accessing array elements from the pointer:\n" <<
		pointer[0] << " " << pointer[1] << "\n";



	// ----------------------------- POINTER ARITHMETIC

	// Instead of brackets, we can also use POINTER ARITHMETIC *(pointer+0) to 
	// print an element in array
	cout << "Accessing array elements from the pointer using paranthesis:\n" <<
		*(pointer + 0) << " " << *(pointer + 1) << "\n";

	// *(p + 0);
	// pointer will be the memory address of the first element in the array
	// We then add to it + 0 or 0 integers
	// The integer is worth 4 bytes
	// 0x4 = 0 
	// aa40 gives us the memory address of the first element in the array
	// Now inside the paranthesis, we have a memory address
	// We now dereference that memory address
	// Dereference == get the value that the pointer points to
	// By dereferencing the memory address, we get the first memory cell 
	// which stores the number 10 and it will cout the number 10

	// pointer[1] and *(pointer + 1) both work the same except that we have an 
	// explicit dereference in the latter option



	// array b is 5 integers, 4 bytes each. 
	// sizeof() function will print 20
	cout << "\nSize of array b in bytes: " << sizeof(b) << endl;
	// size of pointer will print 4 because it stores a 32 bit memory address
	// and 32 bit is equivalent to 4 bytes
	cout << "Size of pointer in bytes: " << sizeof(pointer) << endl;
	// Yet pointer points to the array, so we can access the array from b or pointer pointer



	// ----------------------------- ARRAY FUNCTION PARAMETERS

	// A pointer to the first element of the array is PASSED BY VALUE
	// Because the value of the pointer is the memory address
	// cout << p; will print the memory address of the array b

	// The size of the array must also be sent to the function
	// Either way you write this, its the same thing
	// void print (int *a, int size)								// Pass a pointer by value
	// void print (int a[], int size)								// Pass a pointer by value



	// When we send the array to functions, we dont send the entire array to functions
	// If we pass an array by value to a function, and that array stores a 
	// million elements, that means we have to copy a million elements into
	// another array inside that function.
	// Because when we PASS BY VALUE, we make a copy of something


	// Instead, we continue to do a PASS BY VALUE.
	// But instead of sending the array by value, WE SEND A POINTER TO THE 
	// FIRST ELEMENT OF THE ARRAY
	// This is similar to PASS BY REFERENCE for other variables because when 
	// we do a pass by for variables, we are sending the memory address.

	// We are passing a pointer by value. Meaning we are sending a memory address
	// and that stores the pointer in the function that we are sending the 
	// array to.



	int array[10] = { 1, 2, 3, 4, 5, 6,7, 8, 9, 10 };
	cout << "\n\nThis array is being used in a function.\n";
	cout << "Size of array array: " << sizeof(array) << "\n";
	cout << "Value(memory address) of array array: " << array << "\n\n";

	passArray_1(array);									// Calling the first function
	passArray_2(array);										// Calling the 2nd function










	cout << endl;
	return 0;
}