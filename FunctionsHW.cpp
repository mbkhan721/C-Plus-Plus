#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
void multiplication(int n);
void primeNum(int p);

int main() {

	// 1.
	cout << "\n1.\n" << endl;
	multiplication(6);

	// 2.
	cout << "\n2.\n" << endl;
	primeNum(50);											// void function stands on its own

	cout << "\n\nSquare root of 36: " << sqrt(36) << "\n" << endl;

	cout << endl;
	return 0;
}

void multiplication(int n) {
	for (int i = 1; i <= n; i++) {
		cout << i << " * " << n << " = " << i * n << endl;
	}
}

void primeNum(int p) {
	for (int i = 1; i <= p; i++) {
		bool check = true;									// reset prime assumption for every i
		for (int j = 2; j <= sqrt(i); j++) {				// iterate from 2 to the square root of i inclusive
			if (i % j == 0) {								// check if the current j is a factor of i
				check = false;								// if so, number is not prime, set false and stop checking
				break;
			}
		}
		if (check) {										// if check is still true, print prime number
			cout << i << " ";
		}
	}	
}

*/