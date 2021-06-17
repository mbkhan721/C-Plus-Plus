#include<iostream>
#include<string>
using namespace std;
/*
void one(int n);
int summation(int n);
int compute(int a, int b);
void reverse(string s, int length);
void summationII(int n);

int main() {

	cout << "\n1) Recursive function that counts from 1 up to n:\n"; // 1.
	one(5);

	cout << "\n2) Recursive function to calculate the summation of n:\n"; // 2.
	cout << "Summation(5): " << summation(5) << endl;

	cout << "\n3) Rrecursive function to compute n to the e power:\n"; // 3.
	cout << "2 to the power of 4: " << compute(2, 4) << endl;

	//cout << "\n4) Rrecursive function to print a string in reverse:\n"; // 4.
	//string s;
	//cout << "Enter a string: ";
	//getline(cin, s);
	//reverse(s, s.length());

	cout << "\n5) Rrecursive function to print all summations from n to 1 inclusive:\n"; // 5.
	summationII(5);

	cout << endl;
	return 0;
}
// -----------------------------------------------------------------------------------------------------------------
// 1.
void one(int n) {
	if (n == 1) {									// Base case -- when n reaches 1, print n
		cout << n << endl;
		return;
	}
	one(n - 1);										// Recursive task -- when n > i; keep recursive to reduce n by 1
	cout << n << endl;								// PRINTING AS THE FUNCTIONS ARE RETURNING
}
// ----------------------- Tracing the process above -- void one()
// Starts at Main()
//	one(5) 
//		one(4) 
//			one(3) 
//				one(2) 
//					one(1) print 1					PRINTING AS THE FUNCTIONS ARE RETURNING 
//				one(2) print 2
//			one(3) print 3
//		one(4) print 4
//	one(5) print 5
// Returns to Main()
// -----------------------
// 2.
int summation(int n) {
	if (n == 1) {									// Base case -- when n reaches 1, print n
		return 1;
	}
	return summation(n - 1) + n;					// Recursive task
}
// ----------------------- Tracing the process above -- int summation()
// Starts at Main()
//	summation(5) 
//		summation(4) 
//			summation(3) 
//				summation(2) 
//					summation(1) return 1			PRINTING AS THE FUNCTIONS ARE RETURNING
//				summation(2) return 2 + 1
//			summation(3) return 3 + 3
//		summation(4) return 4 + 6
//	summation(5) return 5 + 10
// Returns to Main()
// -----------------------
// 3.
int compute(int n, int e) {
	if (e == 1) {									// Base case -- when exponent is 1
		return n;									// Return n (the first n to be multiplied)
	}
	return compute(n, e - 1) * n;					// Recursive task
}													// Recurse to decrement the exponent, multiply return value by 10

// ----------------------- Tracing the process above -- int compute()
// Starts at Main()
//		compute(2, 4) 
//			compute(2, 3) 
//				compute(2, 2) 
//					compute(2, 1) return 2			PRINTING AS THE FUNCTIONS ARE RETURNING
//				compute(2, 2) return 2 * 2
//			compute(2, 3) return 4 * 2
//		compute(2, 4) return 8 * 2
// Returns to Main()
// -----------------------
// 4.
void reverse(string s, int length) {
	if (length == 1) {									// If length = 1, return
		cout << s[length - 1] << endl;
		return;
	}
	cout << s[length - 1] << endl;
	reverse(s, length - 1);
}
// ----------------------- Tracing the process above -- void reverse()
// Starts at Main()
//	reverse(Hello, 5) Print o
//		reverse(Hello, 4) Print l
//			reverse(Hello, 3) Print l
//				reverse(Hello, 2) Print e
//					reverse(Hello, 1) Print H			PRINTING AS THE FUNCTIONS ARE RETURNING
//				reverse(Hello, 2) 
//			reverse(Hello, 3) 
//		reverse(Hello, 4)
//	reverse(Hello, 5) 
// Returns to Main()
// -----------------------
// 5.
void summationII(int n) {
	if (n == 1) {										// BASE CASE -- When n = 1, print 1 and return
		cout << n << endl;
		return;
	}													// Recursive task -- When n is greater than 1
	int sum = 0;
	for (int i = 1; i <= n; i++) {						// Iterate from 1 to n inclusive
		sum += i;										// Sum each value of i
	}
	cout << sum << endl;								// Print the summation of n
	summationII(n - 1);									// Recurse to reduce n by 1
}
														// If summationII() does not recurse, we'll only get
															// the value of n which is the last digit. We will
															// get all values from 1 to n.

// ----------------------- Tracing the process above -- void summationII()
// Starts at Main()
//	summationII(5) Print 15
//		summationII(4) Print l0
//			summationII(3) Print 6
//				summationII(2) Print 3
//					summationII(1) Print 1			PRINTING AS THE FUNCTIONS ARE RETURNING
//				summationII(2) 
//			summationII(3) 
//		summationII(4)
//	summationII(5) 
// summationII to Main()
// -----------------------
*/