#include<iostream>
#include<string>
using namespace std;

int getFirstIndex(string s, char c);

string reverse(string s);

void validate(string s);

int factorial(int n);

bool isFactor(int a, int b) {
	if (b % a == 0) {
		return true;
	}
	else {
		return false;
	}
}

char getLastIndex(string str, char s) {
	for (int i = str.length() - 1; i >= 0; --i) {
		if (str[i] == 's') {
			return i;
		}
		return -1;
	}
}

int getNumDigits(int n) {
	int count = 0;
	while (n != 0) {
		n /= 10;
		++count;
	}
	return count;
}

double getMax(int a, double b) {
	if (static_cast<double>(a) > b) {
		return a;
	}
	return b;
}

int fibonacci(int n);

int factors(int n);

int GCD(int a, int b);

int EuclidsGCD(int a, int b);



int main() {
	cout << endl;
	/*
	// 1.
	cout << "1.\n";
	string word;
	char letter;
	cout << "Enter a word and a letter: ";
	cin >> word >> letter;
	cout << getFirstIndex(word, letter) << endl;
	
	// 2.
	string str;
	cout << "\n2.\n";
	cout << "Enter a string: ";
	getline(cin, str);
	cout << reverse(str) << endl;
	
	// 3.
	cout << "\n3.\n";
	validate("2!a!a!");
	
	// 4.
	cout << "\n4.\n";
	int n;
	cout << "Enter a value for n: ";
	cin >> n;
	cout << "n! = " << factorial(n) << endl;
	cout << endl;
		
	string s;
	cout << "TEST Enter a string of any length: "; // ++++++++++++++++++++++++++++++++++++++++++
	cin >> s;
	for (int i = 0; i <= s.length(); i += 2) {
		cout << s[i] << endl;
	}
	
	// 5.
	cout << "\n5.\n";
	cout << "fib(5): " << fibonacci(5) << endl;
	cout << "fib(6): " << fibonacci(6) << endl;
	cout << "fib(7): " << fibonacci(7) << endl;

	// 6.
	cout << "\n6.\n";
	int b;
	cout << "Enter a value for n: ";
	cin >> b;
	cout << factors(b) << endl;
	*/
	// 7.
	cout << "\n7.\n";
	cout << "GCD(10, 8) = " << GCD(10, 8) << endl;
	cout << "GCD(15, 17) = " << GCD(15, 17) << endl;
	cout << "GCD(36, 24) = " << GCD(36, 24) << endl;

	// 8.
	cout << "\n8.\n";
	cout << "Euclids GCD(10, 8) = " << EuclidsGCD(10, 8) << endl;
	cout << "Euclids GCD(18, 12) = " << EuclidsGCD(18, 12) << endl;
	cout << "Euclids GCD(36, 24) = " << EuclidsGCD(36, 24) << endl;
	


	cout << endl;
	return 0;
}

int getFirstIndex(string s, char c) {
	for (int i = 0; i < s.length(); i++) {
		if (c == s[i]) {
			return i;
		}
	}
	return -1;
}

string reverse(string s) {
	int len = s.length();
	for (int i = 0; i < len / 2; ++i) { // iterate from start to middle of the string (length/2)
		char temp = s[i];				// backup current element
		s[i] = s[len - i - 1];			// replace current element with its mirror element
		s[len - i - 1] = temp;			// replace mirror element with original element
	}
	return s;
}

void validate(string s) {
	if (s[0] >= 'a' && s[0] <= 'z') {	// if first char is letter, invalid, end function early
		cout << s << " Invalid" << endl;
		return;
	}
	for (int i = 1; i < s.length() - 1; ++i) {			// iterate from 2nd char to 2nd last char of string
		if (s[i] >= 'a' && s[i] <= 'z') {				// if current char is letter
			if (s[i - 1] != '!' || s[i + 1] != '!') {	// check if prev or next char is not an exclamation point
				cout << s << " Invalid" << endl;		// if so, invalid, end function early
			}
		}
	}
	cout << s << " Valid" << endl;
}

int factorial(int n) {
	int product = 1;									// intialize product to 1
	for (int i = n; i > 1; --i) {						// count from n down to 2
		product *= i;									// multiply product by i each time 
	}
	return product;										// return product
}

// **********************************************************************************************************
//	1	1	2	3	5	8	13	21
//	i	t	c	n
//			0	1
//	1	1	1	1
//	2	2	1	2
//	3	3	2	3
//	4	5	3	5
//	5	8	5	8
//	6	13	8	13
//	7	21	13	21
//	8	34	21	34

int fibonacci(int n) {
	int current = 0, next = 1, temp;					// set start of sequence values current to 0 and next to 1
	for (int i = 1; i <= n; i++) {						// iterate from 1 to n exclusive
		temp = current + next;							// store new value which is sum of current and next
		current = next;									// shift current to the next value in the sequence
		next = temp;									// shift next to the next value in the sequence
	}
	return current;										// return the nth value
}

int factors(int n) {
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}
	return n;
}

int GCD(int a, int b) {
	//for (int i = 2; i <= a; i++) {
	int g, min = a;										// assume a is the smallest value
	if (b < a) min = b;									// if b is smaller, set min to b
	for (int i = min; i >= 1; --i) {					// iterate from min down to 1
		if (a % i == 0 && b % i == 0) {					// if i is a factor of a and b,
			g = i;										// exit loop and return gcd
			break;
		}
	}
	return g;
}

// Counting down to the gcd is faster than counting up.
// Starting from the min of a and b also reduces the total number of iterations.
int EuclidsGCD(int a, int b) {
	int temp;
	while (b != 0) {									// Iterate as long as b is not equal to 0
		cout << "a: " << a << "	b: " << b << endl;
		temp = b;										// backup b
		b = a % b;										// assign b to a%b || GCD(a,b) = GCD(b, a mod b)
		a = temp;										// assign a to b || GCD(a,b) = GCD(b, a%b)
	}
	cout << "a: " << a << "	b: " << b << endl;
	return a;											// since b is 0, a is the gcd, return it || GCD(a, 0) = a
}