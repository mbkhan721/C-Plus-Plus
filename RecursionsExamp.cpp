#include<iostream>
#include<string>
using namespace std;
/*
void stack(int n);
void recurse(int n);
void d(int n);

int main() {

	int n = 5;			// A finite block of system memory allocated by the operating system to a program.
	stack(n);			// The stack works like a stack of plates
	stack(n);			// It is a first-in last-out structure where each function sits on the stack until 
						// it resolves.
						// The stack pointer tracks the top element
						// Each function call has its own memory space on the stack

				// First the main function is called, so the main function is put on to the stack.
				// Once on the stack, all the memory associated within the main function is within the stack frame
				// This frame will include any memory that has been created within the main function

		// Inside the main stack frame, there is a variable n with a value of 5.
		// We call the stack function and send the argument 5 to the stack function.
		// 5 is now copied to a new variable inside stack function
		// Stack is called, another stack frame is created which houses the stack function.
		// Stack stack frame sits on top of main stack frame inside the stack.

	// The two variables that main and stack functions are holding DOES NOT have the same memory address
	// eventhough they have the same name and value.
	// The two variables lives inside their own stack frames in the functions that they were created in.

	// Stack function executes and prints out a 5 and leaves (Destroys) as it has done it's job.
	// Main function, however, is still running. 
	// Next, main function calls the stack function again because there are two stack function calls inside main.
	 
	// A new stack frame is created and Stack stack frames is put on top on main function agian in the stack.
	// This Stack frame is not the same as the previous stack frame of the Stack function
	// THEY ARE TWO SEPARATE FUNCTION CALLS AND THEY HAVE THEIR OWN MEMORY SPACE
	// There are a total of the n variables, 1 in main and 1 in both Stack functions each. They are NOT the same
	// variables.


	// RECURSION
	// It is the opposite of iteration
	// Iteration, you repeat until the condition is false. 
	// With recursion, you recurse or repeat until a condition is true.
	// When the condition is true, we end the recursive process and all the recursive function calls that were
	// made, collapse in reverse.
	// EVERY TIME you recurse, you MUST reduce the problem


	// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	// void f(int n) {
	//  	if(n==1) { // if true the condition ends the recursive process
	//			return; 
	//		}
	//		f(n-1); // recurse by calling the function f again
	//	}
	// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

	// In the example above, f function will call f of n-1
	// f of n-1 will call f or n-1, which is equivalent to f of n-2 and so on
	// N will keep getting reduced everytime the function is called.
	// The reason for reduction is that n will eventually reach the specified value which will teminate the 
	// recursive process.
	// Recursion ends once the condition becomes true.
	// All functions wait for the next function to terminate.

	// Base case is the condition to end the recursive process. 
	// Recursive task repeats some action which include a recursive function calls, its purpose is to reduce the
	// problem from the original problem.

	cout << endl;
	recurse(5);
	cout << "main()";

	cout << endl << endl;
	cout << "Test 3 question: \n";
	d(12);
	cout << "main()";

	cout << endl;
	return 0;
}

void stack(int n) {
	cout << n << endl;
}
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Tracing the problem below -- void recurse()
//
//	   recurse(5) print 5
//		 recurse(4) print 4
//			recurse(3) print 3
//			  recurse(2) print 2
//				recurse(1) print 1
//			  recurse(2)
//			recurse(3)
//		 recurse(4)
//	   recurse(5)
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void recurse(int n) {
	if (n == 1) {						// Base case
		cout << n << " ";				// printing 1
		cout << "\n\nPrinting the function calls as they return in \nfirst-in last-out structure back to main:\n\n";
		return;
	}
	cout << n << " ";					// if n was 5, printing 5, 4, 3, 2
	recurse(n - 1);						// Recursive task
	cout << "Function(" << n << ") ";
}
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Tracing the problem below -- void d()
//
//	   d(12) print 12
//			d(4) print 4
//				d(1) print 1
//			d(4)
//		d(12)
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void d(int n) {
	if (n < 2) {						// Base case
		cout << n << " ";				// printing 1
		cout << "\n\nPrinting the function calls as they return in \nfirst-in last-out structure back to main:\n\n";
		return;
	}
	cout << n << " ";					// if n = 12, printing 12, 4
	d(n / 3);							// Recursive task
	cout << "Function(" << n << ") ";
}
*/