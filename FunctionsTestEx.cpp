#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
int multiply(int a, int b);
bool isFactor(int a, int b);
int getLastIndex(string str, char c);
int getNumDigits(int n);

int main() {

	// 1.
	cout << "\n1.\n" << endl;
	cout << "int multiply(int a, int b);" << endl;

	// 2.
	cout << "\n2.\n" << endl;
	cout << isFactor(3, 10) << endl;

	// 3.
	cout << "\n3.\n" << endl;
	cout << getLastIndex("Queensborough", 'e') << endl;

	// 4.
	cout << "\n4.\n" << endl;
	cout << getNumDigits(444) << endl;
	



	cout << endl;
	return 0;
}

bool isFactor(int a, int b) {
	if (b % a == 0) {
		return true;
	}
	else
		return false;
}

int getLastIndex(string str, char c) {
	for (int i = str.length() - 1; i >= 0; --i) {
		if (str[i] == c) {
			return i;
		}
	}
	return -1;
}

int getNumDigits(int n) {
	int digits = 0;											// initialize the count of digits to 0
	for (int i = 0; i <= n; i++) {
		n /= 10;											// remove the least significant digit
		digits++;											// increase count everytime you remove a digit
	}
	return digits;
}
*/
// +++++++++++++++++++++++++++++++++ For problem 4, can use a while loop for problem 4 instead of a for loop.
/*
int getNumDigits(int n) {
	int count = 0;
	while (n != 0) {
		n /= 10;
		++count;
	}
	return count;
}
*/