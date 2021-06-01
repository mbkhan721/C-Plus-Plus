#include<iostream>
using namespace std;

int ar3() {

	float myNumber;
	cout << "Enter a floating-point value: ";
	cin >> myNumber;
	cout << endl;

	int i = static_cast<int>(myNumber);
	cout << "The integer value is: " << i << endl;
	cout << "The remaining decimal value is: " << (myNumber - i) << endl;

	return 0;
}