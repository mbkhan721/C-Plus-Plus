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

// 2.
void factors(int n) {
	for (int i = 1; i <= n; i++) {					// The outter loop counts from 1 to n
		for (int j = 1; j <= i; j++) {				// The inner loop will check if the current value of i has any factors
			if (i % j == 0) {						// IS j A FACTOR OF i || IS i A MULTIPLE OF j
				cout << j << " ";					// Print j because j is the value of the inner loop
			}										// i is the value of outter loop
		}
		cout << endl;								// new line after each fator
	}
}

// 3.
void primeFactors(int n) {
	int factor = 2;
	while (n != 1) {								// The outter loop waits until n gets reduced to 1
		while (n % factor == 0) {					// If factor found, print it. Then extract it
			//cout << n << " " << factor << " ";
			cout << factor << " ";					// prints 2 3 3 if input is 18
			n /= factor; // 18 = 18 / 2				// Reduce n by extracting the factor
		}
		++factor;									// Find the smallest factor to extract
													// once it checks if all the twos are factor, it will check all the threes
													// once it's done checking all the threes, it will check all the fours, and
													// so on...
	}
}

// 4.
void triangles(int n) {
	n = 2 * n + 1;
	for (int r = 1; r <= n; ++r) {
		for (int c = 1; c <= n; c++) {
			if (r <= n / 2 + 1 && c <= n / 2 + 1 && c >= r) {
				cout << "*";
			}
			else if (r >= n / 2 + 1 && c >= n / 2 + 1 && c <= r) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

// 5.
void graph(int n) {
	if (n == 0) {										// Base case
		return;
	}
	graph(n / 10);										// Remove the least significant digit on each recurse
	for (int i = 1; i <= n % 10; i++) {					// Print the last digit on the return
		cout << "*";
	}
	cout << endl;										// Print stars in new line after each loop
}
// printDigits(6529)
//	 printDigits(652)
//		printDigits(65)
//		  printDigits(6) loops 6 times --> prints 6 stars
//		printDigits(65) loops 5 times --> prints 5 stars
//	 printDigits(652) loops 2 times --> prints 2 stars
// printDigits(6529) loops 9 times --> prints 9 stars
/*
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
	

	// ---------------------------------------	2.
	cout << "\n2.	computes and prints the all factors of x\n";
	int x;
	cout << "Enter a positive integer: ";
	cin >> x;
	factors(x);
	

	// ---------------------------------------	3.
	cout << "\n3.	Prime factorization of the number n\n";
	int m;
	cout << "Enter a positive integer: ";
	cin >> m;
	primeFactors(m);
	

	// ---------------------------------------	4.
	cout << "\n4.	 Prints the following 2*n+1 by 2 * n + 1 image\n";
	int p;
	cout << "Enter a positive integer: ";
	cin >> p;
	triangles(p);
	

	// ---------------------------------------	5.
	cout << "\n5.	 Rrecursively extracts each digit from n in forward order\n";
	int q;
	cout << "Enter a positive integer: ";
	cin >> q;
	graph(q);
	



	cout << endl;
	return 0;
}
*/