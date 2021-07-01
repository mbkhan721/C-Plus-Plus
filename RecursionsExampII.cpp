#include<iostream>
#include<string>
using namespace std;

void printDigits(int n);
int countDigits(int n);
int factorial(int n);
int fibonacci(int n);

int main() {

	cout << "\nRecursively print all digits of a number:\n";
	printDigits(6529);
	cout << endl;
	cout << "\nCount the number of digits:\n";
	cout << countDigits(6529) << endl;
	cout << "\nRecursively compute n!:\n";
	cout << factorial(5) << endl;
	cout << "\nRecursively compute the nth value of the fibonacci sequence:\n";
	cout << "fib(8): " << fibonacci(8) << endl;

	cout << endl;
	return 0;
}

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Tracing the problem below -- printDigits()

// printDigits(6529)
//	 printDigits(652)
//		printDigits(65)
//		  printDigits(6) print 6
//		printDigits(65) print 5
//	 printDigits(652) print 2
// printDigits(6529) print 9

void printDigits(int n) {
	if (n < 10) {						// BASE CASE - when n is one digit
		cout << n << " ";				// Print n
		return;														// End recursion
	}									// Recursive task
	printDigits(n / 10);				// Reduce the problem by removing the last digit
	cout << n % 10 << " ";				// Print the last digit
}
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 

// -----------------------------------------------------------------------------------------|
int countDigits(int n) {																	
	if (n < 10) {						// BASE CASE - when one digit remains				|
		return 1;						// Return 1 to end recursion						|
	}											// RECURSIVE TASK:							|
	return countDigits(n / 10) + 1;				// Reduce problem by removing last digit	|
}												// Add 1 to return value					|


// Tracing the problem above -- countDigits()											    |
//																							|		
//		countDigits(6529)																	|
//			countDigits(652)																|
//				countDigits(65)																|
//					countDigits(6) return 1													|
//				countDigits(65) return 1 + 1												|
// 			countDigits(6652) return 2 + 1													|
//		countDigits(6529) return 3 + 1														|					
// -----------------------------------------------------------------------------------------|


int factorial(int n) {
	if (n == 2) {							// base case: when n is 2
		return 2;							// return 2 to end recursion
	}												// Recursive task:
	return factorial(n - 1) * n;					// reduce problem by subtracting 1 from n
}													// multiply return value by n


int fibonacci(int n) {
	if (n < 2) {													// base case: when n is less than 2
		return n;
	}																// recursive task
	return fibonacci(n - 1) + fibonacci(n - 2);						// return the sum of n-1 and n-2
} //			/					\
//			   /					 \		if n = 8 ******
//			  /						  \    
//   8-1=7   f(7)			+		   f(6)  8-2=6
//			  |							|
//			   \						 \
//				f(6)					  f(5)
//				 |							|
//				 |							|
//				f(5)					  f(4)
//				 |							|
//				 |							|
//				f(4)					  f(3)
//				 |							|
//				 |							|
//				f(3)					  f(2)
//				 |							|
//				 |							|
//				f(2)					  f(1)   
//				 |							
//				 |							FIB of 6 is 8
//				f(1)					  
//					   FIb of 7 is 13							8 + 13 = 21 ******
//
//											So if n = 8, the fib value is 21
// 
//			Left hand side get resolved first								Right hand side is resolved second
// 
//										It sums the two after the sides are resolved

// ____________________________________________________________________________________________________
//*****************************************************************************************************
//
// this function adds as it returns, two functions at a time
//
// recursion tree (diagram of all recursive function calls)
//            f(4)
//           /    \
//        f(3)    f(2)
//        /  \    /   \
//    f(2)  f(1)f(1) f(0)
//   /  \
// f(1) f(0)
//
//          3
//       /    \
//      2  +  1
//     / \   / \
//    1 + 1 1 + 0
//   / \
//  1 + 0
//
// Fibonacci Sequence
// nth = 0 1 2 3 4 5 6 7  8  9  10
//       0 1 1 2 3 5 8 13 21 34 55

*/