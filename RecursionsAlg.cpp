#include<iostream>
using namespace std;
/*
int sumDigits(int n);
void interLeave(int a, int b);
bool palindrome(string s);

// -----------------------------------------------------------------------------------------------------------------
int main() {

	cout << "\n1.\nRecursive function to sum all digits of a number: \n"; // 1.
	cout << sumDigits(345) << endl;

	//cout << "\n2.\nRecursive function to interleave two numbers: \n"; // 2.
	//int a, b;
	//cout << "Enter a positive int: ";
	//cin >> a >> b;
	//interLeave(a, b);

	cout << "\n3.\nRecursive function to determine if a string is a palindrome: \n"; // 3.
	string s;
	cout << "Enter a string: ";
	cin >> s;
	if (palindrome(s)) {
		cout << s << " is a palindrome" << endl;
	}
	else {
		cout << s << " is not a palindrome" << endl;
	}


	cout << endl;
	return 0;
}
// -----------------------------------------------------------------------------------------------------------------
// 1.
int sumDigits(int n) {
	if (n < 10) {									// if number is less than 10, the base case will execute
		return n;
	}
	return sumDigits(n / 10) + (n % 10);
}
// ----------------------- Tracing the process above -- int sumDigits()

//			sumDigits(345) 
//				sumDigits(34) 
//					sumDigits(3) return 3			Returns AS THE FUNCTIONS ARE RETURNING
//				sumDigits(34) return 3 + 4
//			sumDigits(345) return 7 + 5

// -----------------------
// 2.
void interLeave(int a, int b) {
	if (a < 10) {									// Base case: when one digit left, print a then print b
		cout << a << b;
		return;
	}												// Recursive task: when a has more than one digit
	interLeave(a / 10, b / 10);						// recurse and remove last digits of both a and b
	cout << a % 10 << b % 10;						// Print last digits of a followed by b
}
// ----------------------- Tracing the process above -- void interLeave()
//
//		interLeave (123, 456)
//			interLeave (12, 45)
//				interLeave (1, 4) print 14
//			interLeave (12, 45) print 25
//		interLeave (123, 456) print 36
// ----------------------- 
// 3.
bool palindrome(string s) {
	int len = s.length();
	if (len < 2) {									// Base case - if length is 0 or 1 return true
		return true;
	}												// Recursive task
	if (s[0] == s[len - 1]) {						// If first letter == last letter, continue to recursion
													// otherwise, return false immediately 
		return palindrome(s.substr(1, len - 2));	// continue to recurse on smaller strings 
													// (remove first/last letters)
													// Start at the 2nd letter and end at 2nd to last letter
	}
	return false;									// If letters dont match, return false
}
// ----------------------- Tracing the process above -- bool palindrome()
//
//		palindrome (kayak) s[0] == s[4]
//		|	palindrome (aya) s[0] == s[2]
//		|	|	palindrome (y) return true			Base case - if length is 0 or 1 return true
//		|	palindrome (aya) return true
//		palindrome (kayak) return true
// ----------------------- 
*/