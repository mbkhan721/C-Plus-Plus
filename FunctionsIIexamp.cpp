#include<iostream>
using namespace std;
/*
// PASSS BY VALUE
int increment(int n) {
	return ++n;
}
// PASSS BY REFERENCE
void increment_1(int& n) {
	++n;
	cout << "Memory address of &n: " << &n << endl;
}


// -----------------------------------------------------------------------------------------------------------------
int main() {

	int x;
	x = 5;
	cout << "\nx = " << x << endl;
	cout << "Memory of variable x: " << &x << endl;			// 00D8FD3C 
	cout << "Size of x in bytes: " << sizeof(x) << endl;

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

	cout << "\n----------------------------- REFERENCES" << endl;
	// ----------------------------------- REFERENCES
	 
	// an alias or additional name for a variable
	// First and last name are two different names. but they both reference the same person

	int y = 5;
	int &r = y;		// r is the reference for y

	cout << "\nOriginal variable 'y' assigned 5: \ny = " << y << endl;
	cout << "\n'R' is referenced for variable 'y': \nr = " << r << endl;
	cout << "\nMemory address:\n";
	cout << "Memory address of Y: " << &y << endl;
	cout << "Memory address of R: " << &r << endl;
	++y;
	cout << "\n++y;\n\nIf 'y' ncremented by 1, 'r' will be updated too: \nr = " << r << endl;

	// r is another name for x
	// r has the memory address as x
	// r has the same value as x

	cout << "\n----------------------------- PIONTERS" << endl;
	// ----------------------------------- PIONTERS

	// Pointer is a variable that stores the address of another variable
	// Your house will be the variable and the address will point at your house

	int z = 5;
	int* p = &z;	// store the memory address of z in pointer p
					// Pointer MUST point to a variable of that type

	cout << "\nInt z = " << z << endl;
	cout << "Pointer *p = " << *p << endl;	// Dreferences p, which prints 5
											// *p will return the variable that p points to
											// *p equates to z
											// star(*) means, get the variable that p points to

	cout << "Memory address of &z: " << &z << endl;
	cout << "Output the value of p which is the memory address of z: " << p << endl;		
														// Print the value of p (The memory address of z)
														// The value of p is the memory address of x
														// we say that p points to x
	// the value of p is the memory address of x
	// dereferencing p returns the variable x

	cout << "\nMemory of &p: " << &p << endl;
	cout << "p is a separate variable from z. However, the value of p is the memory address of z." << endl;

	
	// ----------------------------------- SCOPE

	// variable scope begins where the variable is created
	// variable scope ends at the close of the current code block
	// For example, the scope of i begins in the for loop and ends at the closing code block of the loop }
	// Local
	// we think of a variables as being local to the current code block


	// After the code block, the memory that a variable takes up is RELEASED. 
	// THAT MEMORY CAN BE REUSED ANYWHERE IN THE PROGRAM AFTER THAT POINT

	// SCOPE DEFINES WHERE A VARIABLE IS ACCESSABLE, BUT ALSO, WHEN A VARIABLE GOES OUTTA SCOPE, 
	// AT THAT POINT, THE VARIABLE IS AVAIBLE FOR OPERATING SYSTEM TO DESTORY AT ANY POINT THAT 
	// THE OPERATING SYSTEM FEELS LIKE DOING SO.


	cout << "\n----------------------------- PASS BY VALUE" << endl;
	// ----------------------------------- PASS BY VALUE

	// copy the value of the argument into the parameter
	// 
	//		void func(int a) {						function, a is the parameter
	//			cout << a << endl;					Prints the value of a (same as x)
	//		}										|
	//												|
	//		int main() {							|
	//			int x = 5;							|
	//			func(x);							function call, x is the argument


	int b = 5;										// B is asssigned value of 5
	b = increment(b);
	cout << "\nb = 5;\nb called the function twice and the function prefix b by 1 each time\nb = " <<
		increment(b) << endl;
	cout << "b called the function just one and incremented by 1 one time\nb = " << b << endl;


	cout << "\n----------------------------- PASS BY REFERENCE" << endl;
	// ----------------------------------- PASS BY REFERENCE

	// in PASSS BY REFERENCE, we don't send the value of the variable.
	// We send the memory address of the variable
	// ONE VARIABLE, TWO NAMES
	// 
	// 
	//		void func(int &a) {						a is the reference for x (another name for x)
	//			++a;								increment a (this changes x)
	//		}										|
	//												|
	//		int main() {							|
	//			int x = 5;							|
	//			func(x);							function call, x is the argument
	//			cout << x;							Prints 6
	//
	//		a is a reference for x
	//		therefore, a is the same variable as x
	//		this means any changes to a, also change x

	int c = 5;
	cout << "\nc = " << c << endl;
	increment_1(c);
	cout << "c incremented after function call: c = " << c << endl;
	cout << "Memory address of &c: " << &c << endl;


	// ----------------------------------- PASS BY CONSTANT REFERENCE

	// The function cannot modify the value of a constant reference
	//
	//
	//		void func(const int &a) {						a is the reference for x (another name for x)
	//			++a;										compiler error: 'a' is a constant variable
	//		}
	//												
	//		int main() {							
	//			int x = 5;							
	//			func(x);									function call, x is the argument
	//			cout << x;									Prints 6
	//
	//		X CAN BE CHANGED INSIDE MAIN() BUT A CANNOT BE CHANGED BECAUSE A IS A CONSTANT VARIABLE



	// ----------------------------------- AUTOMATIC TYPE CONVERSION

	// compatible arguments are implicitly casted to the parameter type
	// automatic type conversion not possible with pass by reference
	// 
	// 
	//		void print(int i) {								// integer parameter 
	//			cout << i;									// prints 65 (‘A’ casted into an integer)
	//		}
	//		int main() {
	//			char c = ‘A’;
	//			print(c);									// character argument
	//		}
	//


	// ----------------------------------- OVERLOADING

	// Multiple functions with same name and return type, but different parameter list
	// PARAMETERS MATTERS
	// 
	// int sum(int a, int b) {
	// &
	// int sum(int x) {


	// ----------------------------------- OVERLOADING AMBIGUITIES
	//
	// When two functions with same name and same number of parameters are called,
	// the compiler doesn't know which function to call.

	cout << endl;
	return 0;
}
*/