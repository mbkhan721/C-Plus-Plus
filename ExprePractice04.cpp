#include<iostream>
#include<time.h>
using namespace std;

int main() {
	
	cout << 3 % 4 << endl; // 4 goes into 3 zero times and there's 3 left over. 
	cout << 2 % 3 << endl << endl; // 3 goes into 2 zero times and there's 2 left over. 
	
	// 5, 6, 7, 8 below are the input set (left operand)
	// 4 is the output set 
	// mod operand is 4 (right operand)
	cout << "Mod 4" << endl;
	cout << 4 % 4 << endl;
	cout << 5 % 4 << endl;
	cout << 6 % 4 << endl;
	cout << 7 % 4 << endl << endl;
	// the output is finite (predictable) 0, 1, 2, 3

	cout << "Five mod Fifteen" << endl;
	cout << 5 % 15 << endl << endl; // 15 goes into 5 zero(0) times and 5 is the left over
							// will print 5
	cout << "Mod 5" << endl;
	cout << 15 % 5 << endl;
	cout << 16 % 5 << endl;
	cout << 17 % 5 << endl;
	cout << 18 % 5 << endl;
	cout << 19 % 5 << endl << endl;
	// the output is finite (predictable) 0, 1, 2, 3, 4

	/* Whatever I mod by, I'm always going to have an output set with a range
	* of values from 0 to n-1 
	* x % n where x is any integer input value 
	* 
	* the input set is infinite, the output set is finite 
	* meaning, you can mod any number but the output range will be from '0 to n-1'
	* 
	* '0 to n-1' can also be '1 to n-2'
	* 
	* x%20 can return values 0 to 19 inclusive (20 values)
	* x%7 can return values 0 to 6 inclusive (7 values)
	* 
	* 'x%3+5' +5 is where you wannt to start the range
	*/
	/*
	int startAtSmalLetter = 13;
	int numberOfValues = 8;
	cout << "Modulus Division Range" << endl;
	// 0 % 8 + 13
	cout << 0 % numberOfValues + startAtSmalLetter << endl << endl;

	cout << "Modulo Questions" << endl;
	// 1. 23 values from 0 - 22
	
	// 2. x % 14 (0 - 13)

	// 3. 0 - 29 (0 - n-1)

	// 4. 200 (0 - n-1)

	// 6. 20 (24-5+1)

	// 7. x % 9 + 22 (30-22+1)

	// 8. x % 8 - 3 (4+3+1)

	cout << (15 % 5 == 0) << endl;


	cout << endl;
	cout.setf(ios::fixed);
	cout.precision(2);
	float z = 1;
	cout << "Testing " << z << endl << endl;

	srand(time(NULL));
	cout << "Random number: " << rand() % 10 << endl << endl;

	// EXPRESSIONS PRACTICE PROBLEMS -------------------------------------------
	// 1.
	cout << "---------------------------------------------------------" << endl << endl; /*
	cout.precision(4);
	int a, b;
	cout << "Enter a numerator: ";
	cin >> a;
	cout << "Enter a denominator: ";
	cin >> b;
	
	cout << "Regular Division: " << (a / static_cast<double>(b)) << endl;
	cout << "Integer Division: " << (a / b) << endl << endl;
	
	// 2.
	cout << 44 % 7 << endl;
	cout << 50 % 4 << endl << endl;
	
	// 3.
	int d;
	cout << "Enter a value: ";
	cin >> d;
	cout << "A value between 0 and 10 inclusive: " << (d % 11) << endl << endl;
	
	// 4. (34 - 30 + 1)
	int e;
	cout << "Enter a value: ";
	cin >> e;
	cout << "A value between 30 and 34 inclusive: " << (e % 5 + 30) << endl << endl;
	
	/* 6. If a%b==0, what can we say about a relative to b and b relative to a?
	* 'A' is a multiple of 'B' and 'B' is a factor of 'A'	
	*/
	/*
	// 7.
	int f, g;
	f = 7, g = 21;
	cout << (f == g) << endl;
	cout << (f >= g) << endl;
	cout << (f < g) << endl << endl;

	cout << "Negated statements: " << endl;
	cout << (f != g) << endl;
	cout << (f < g) << endl;
	cout << (f >= g) << endl << "\n";
	
	// 8.
	int h;
	cout << "Enter a value for x: ";
	cin >> h;
	cout << "X incremented by 2: " << (h += 2) << endl;
	cout << "X decremented by 1: " << --h << endl;
	*/
	// 9.
	int x = 5, y = 6, z = 7;
	cout << "Given x = " << x << ", y = " << y << ", z = " << z << endl;

	cout << "X\t" << "Y\t" << "Z\t" << endl;
	cout << "---\t" << "---\t" << "---\t" << endl;

	cout << x << "\t" << y << "\t" << z << endl;
	cout << x << "\t" << y << "\t" << z << endl;
	cout << x << "\t" << y << "\t" << z << endl;
	cout << x << "\t" << y << "\t" << z << endl;
	cout << x << "\t" << y << "\t" << z << endl;

	cout << endl;

	cout << "X\t" << "Y\t" << "Z\t" << endl;
	cout << "---\t" << "---\t" << "---\t" << endl;

	cout << x++ << "\t" << (y += 2) << "\t" << --z << endl;
	cout << x++ << "\t" << (y += 2) << "\t" << --z << endl;
	cout << x++ << "\t" << (y += 2) << "\t" << --z << endl;
	cout << x++ << "\t" << (y += 2) << "\t" << --z << endl;
	cout << x++ << "\t" << (y += 2) << "\t" << --z << endl;



	cout << endl;
	return 0;
}