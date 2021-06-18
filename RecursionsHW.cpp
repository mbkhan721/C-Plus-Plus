#include<iostream>
using namespace std;
/*
int euclid(int a, int b);
void starPrint(int n);

// -----------------------------------------------------------------------------------------------------------------
int main() {

	cout << "\n1.\nCalculate GCD using Euclid's algorithm: \n"; // 1.
	int a, b;
	cout << "Enter two positive integers: ";
	cin >> a >> b;
	cout << euclid(a, b) << " ";

	cout << "\n\n2.\nPrint stars for every digit in n: \n"; // 2.
	int n;
	cout << "Enter a number: ";
	cin >> n;
	starPrint(n);

	cout << "\n\n--------------------------------------------" << endl;
	cout << "\n(20 % 16) = " << 20 % 16 << endl;
	cout << "16 goes into 20 1 time with a remainder of 4." << endl;
	cout << "\n(16 % 20) = " << 16 % 20 << endl;
	cout << "20 goes into 16 0 times with a remainder of 16." << endl;

	cout << endl;
	return 0;
}
// -----------------------------------------------------------------------------------------------------------------
// 1.
int euclid(int a, int b) {
	if (b == 0) {									// b) euclid(a, 0) = a
		cout << a << " " << b << endl;
		return a;
	}
	cout << a << " " << b << endl;					// a) euclid(a, b) = euclid(b, a mod b)
	return euclid(b, a % b);
}
// ----------------------- Tracing the process above -- int euclid()
//
//		euclid (20, 16)   -->  b, a%b --> (16, 20 % 16)
//			euclid (16, 4)  -->  b, a%b --> (4, 16 % 4)
//				euclid (4, 0) return 4			
//			euclid (16, 4) return 4
//		euclid (20, 16) return 4
// ----------------------- 
// 2.
void starPrint(int n) {
	if (n < 10) {									// Base case
		for (int i = 1; i <= n; i++) {				// If only one digit is left
			cout << "*";							// print digit stars
		}
		cout << endl;
		return;
	}
	starPrint(n / 10);								// Recurse to remove the right digit
	for (int i = 1; i <= (n % 10); i++) {			// Print digit stars 
		cout << "*";
	}
	cout << endl;
}
// ----------------------- Tracing the process above -- void starPrint()
// printDigits(5234)
//	 printDigits(523)
//		printDigits(52)
//		  printDigits(5) print 5 *
//		printDigits(52) print 2 *
//	 printDigits(523) print 3 *
// printDigits(5234) print 4 *
// ----------------------- 
*/