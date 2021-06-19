#include<iostream>
#include<time.h>
#include<assert.h>							// assertion included for 1b
											// assertion is like an if else with an exit statement
using namespace std;


// 1.
void randNums(int &num, int base) {			// Num is pass by reference / Base is pass by value
	num = rand() % base;					// Num is directly updated by the function
}
// 1b.	ANOTHER WAY OF PROBLEM 1 

void randBase(int& number, int base) {
	assert(base >= 2 && base <= 10);		// The while loop is replaced by assertion in the function
	number = rand() % base;
}


// -----------------------------------------------------------------------------------------------------------------
int main() {

	// 1.
	cout << "\n1.\n";
	srand(time(NULL));
	int base;
	
	do {
		cout << "Enter a base between 2 and 10 inclusive: ";
		cin >> base;
	} while (base < 2 || base > 10);

	
	int n;
	for (int i = base; i < base + 20;  i++) {
		randNums(n, base);
		cout << n << " ";					// Again, num is PASS BY REFERENCE so it updates even after the function
	}


	// ---------------------------------------	ANOTHER WAY OF DOING PROBLEM 1
	cout << "\n\nAnother way of doing problem 1:\n";

	int b;
	cout << "Enter a base between 2 and 10 inclusive: ";
	cin >> b;

	int number;
	for (int i = 0; i < 20; i++) {
		randBase(number, b);
		cout << number << " ";
	}


	cout << endl;
	return 0;
}
