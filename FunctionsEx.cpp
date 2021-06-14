#include<iostream>
#include<string>
using namespace std;
/*
int sum(int a, int b) {
	return a + b;													// this is a function definition
}

int getNumber() {
	int n;
	cout << "\n2nd function user input\nEnter a number: ";
	cin >> n;
	return n;
}

string func(); // no parameters

int numFunc(int n);													// 1--- This is declaration

int mixFunc(string s, int x);

void hello();														// void function

void myFunc(int n) {												// void statement with return statement
	for (int i = 0; i < 100; ++i) {
		cout << i << " ";
		if (i / n == n) { return; }									// iterate until n squared
	}	// break exits the loop
}		// return exits the function														




int funEx() {
	cout << endl;

	// double sum(double a, int b) { // definition + parameters (the specification data)
	// sum(5.5, 10) // inside funtion body is the argument (the actual data)
	// }
	
	cout << "1st function: " << sum(5, 6) << endl;					// this is a function call
	cout << "1st function / 2nd call: " << sum(7, 21) << endl;
	cout << "2nd function: " << getNumber() << endl;
	cout << "\n3rd function:\n" << func() << endl;					// no arguments in func()
	int num1 = numFunc(4);
	cout << "\n4th function:\n" << num1 << endl;
	int m = 7;
	int num2 = m;
	cout << "\n4th function / 2nd call:\n" << numFunc(num2) << endl;
	cout << "\n4th function / 3rd call:\n" << numFunc(21) << endl;	// 1--- call
	cout << "\n5th function:\n" << mixFunc("\nHi", 5) << endl;
	cout << "\n6th function:" << endl;
	hello();														// cannot cout nor assign to a void func
	cout << endl;
	cout << "\n7th function:" << endl;								// cannot cout a void function
	myFunc(5);
	




	cout << endl;
	return 0;
}


string func() {
	string y = "This function is declared before main and defined after main.";
	return y;
}

int numFunc(int n) {												// 1--- definition
	return n;
}

int mixFunc(string s, int x) {
	cout << s << "\n";
	return x;
}

void hello() {
	cout << "This is a void function, it does not return anything." << endl;
}

*/