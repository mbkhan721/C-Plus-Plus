#include<iostream>
#include<string>
using namespace std;

void stack(int n);

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


	/*
	void f(int n) {
		if(n==1) { // if true the condition ends the recursive process
		return; 
		}
		f(n-1); // recurse by calling the function f again
	}
	*/

	// In the example above, f function will call f of n-1
	// f of n-1 will call f or n-1, which is equivalent to f of n-2 and so on
	// N will keep getting reduced everytime the function is called.
	// The reason for reduction is that n will eventually reach the specified value which will teminate the 
	// recursive process.
	// Recursion ends once the condition becomes true.
	// All functions wait for the next function to terminate.




	cout << endl;
	return 0;
}

void stack(int n) {
	cout << n << endl;
}