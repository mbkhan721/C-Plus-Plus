#include<iostream>
using namespace std;

int main() {

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
	/*
	float myNumber;
	cout << "Enter a floating-point value: ";
	cin >> myNumber;
	cout << endl;

	int i = static_cast<int>(myNumber);
	cout << "The integer value is: " << i << endl;
	cout << "The remaining decimal value is: " << (myNumber - i) << endl;
	*/

	/*
	// 1. Implicit version ---------------- lower to upper
	char c;
	cout << "Enter a lowercase letter: ";
	cin >> c;
	// convert the char into integer
	int i = c;
	// subsstract 32 from integer
	i -= 32;
	// convert modified int back to char
	c = i;
	cout << endl; 
	cout << "The uppercase equivalent is: " << c << endl;
	*/


	/*
	// 1b Explicit version ----------------- upper to lower
	char z;
	cout << "Enter a uppercase letter: ";
	cin >> z;
	cout << endl;
	int x = static_cast<int>(z); // converting char into int
	x = x + 32;
	z = static_cast<char>(x); // converting int back to char
	cout << "The lowercase version is: " << z << endl;
	*/

	
	// lower to upper ------------------ single line solution 
	char y;
	cout << "Enter a lowercase letter: ";
	cin >> y;
	cout << endl;
	y = static_cast<char>(static_cast<int>(y) - ('b' - 'B'));
	cout << "The uppercase equivalent is: " << y << endl;

	return 0;
}