#include<iostream>
using namespace std;

int main() {
	/*
	// 1.
	int a = 1, b = 2;
	cout << a << " " << b << endl << endl;
	if (a <= b) { // true, 1 is less than 2
		b++;      // postfix b = b + 1 which is 3
	}
	cout << a << " " << b << endl << endl; // print a = 1, b = 3
	if (a % b == 0) {					   // 1 % 3 is false so we execute the else block
		a = ++b;
	}
	else {
		b = a++;							// original value of a goes into b, b becomes 1 
	}										// a++ increments a so a becomes 2
	cout << a << " " << b << endl << endl;  // prints a = 2, b = 1
	b *= a;									// b = b * a which is 2
	cout << a << " " << b << endl << endl;  // prints a = 2, b = 2
	cout << 1 % 3 << endl;
	
	// 2.
	double c;
	cout << "Enter an integer between 1 & 100 inclusive: ";
	cin >> c;
	if (c == static_cast<int>(c)) {
		if (c >= 1 && c <= 100) {
			cout << c << " is a valid int bet 1 and 100" << endl;
		}
		else
			cout << c << " is not an int between 1 and 100" << endl;
	}
	else {
		cout << c << " is not an integer" << endl;
	}
	
	// 3.
	int d;
	cout << "Enter an integer: ";
	cin >> d;
	if (d % 2 == 0) {
		cout << d << " is an even number" << endl;
	}
	else {
		cout << d << " is an odd number" << endl;
	}
	
	// 4.
	int e, f;
	cout << "Enter two integers: ";
	cin >> e >> f;
	if (e % f == 0) {
		cout << f << " is a factor of " << e << endl;
	}
	else {
		cout << y << " is not a factor of " << e << endl;
	}

	*/
	// 5.
	char g;
	cout << "Enter a character: ";
	cin >> g;
	if (g >= 'a' && g <= 'z') {
		cout << g << " is a lowercase" << endl;
	}
	else if (g >= 'A' && g <= 'Z') {
		cout << g << " is a uppercase" << endl;
	}
	else if (g >= '0' && g <= '9') {
		cout << g << " is a number" << endl;
	}
	else {
		cout << g << " is neither a number nor a letter." << endl;
	}
	


	cout << endl;
	return 0;
}