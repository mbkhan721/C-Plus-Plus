#include<iostream>
using namespace std;

int ar3() {

	/*
	char c;
	cout << "Enter a lowercase letter: ";
	cin >> c;

	// covert c into integer
	// int i = c; implicit
	int i = static_cast<int>(c);

	// substract 32 from integer equivalent
	i -= 32;
	// convert modified integer back into character and store into c
	c = i; // implicit
	// c = static_cast<char>(i); // explicit

	/*
	* This is a single line solution
	* c = static_cast<char>(static_cast<int>(c)-('a'-'A'));
	*/

	// cout << "The uppercase equivalent is " << c << endl;

	float myNumber;
	cout << "Enter a floating-point value: ";
	cin >> myNumber;
	cout << endl;

	int i = static_cast<int>(myNumber);
	cout << "The integer value is: " << i << endl;
	cout << "The remaining decimal value is: " << (myNumber - i) << endl;

	return 0;
}