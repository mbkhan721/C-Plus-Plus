#include<iostream>
#include<string>
using namespace std;
/*
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

int getAsciiValue(char a) {
	//a = static_cast<int>(a) + ('B' - 'b');
	return (int) a;
}


int main() {
	cout << endl;
	
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
	
	// 5.
	const int DIM = 5;
	for (int row = 1; row <= DIM; ++row) {
		for (int col = 1; col <= DIM; ++col) {
			if (row % 2 != 0 && col % 2 != 0) {
				cout << "x ";
			}
			else if (col == DIM / 2 + 1 ) {
				cout << "x ";
			}
			else
				cout << "o ";
		}
		cout << endl;
	}
	cout << endl << endl;

	const int D = 5; // must work for D==3 and D==5

	for (int r = 1; r <= D; ++r) {
		for (int c = 1; c <= D; ++c) {
			if (c > r || c == r - 2) { // line 2 SW of \ OR all coordinates NW of 
				cout << "X ";
			}
			else {
				cout << "0 ";
			}
		}
		cout << "\n";
	}

	cout << endl << endl;
	
	int sum;
	int max = 10;
	for (int i = 0; i <= max; i++) {
		sum = 0;
		for (int j = 1; j <= i; j++) {
			sum += j;
		}
		cout << sum << endl;
	}

	string s;
	cout << "TEST Enter a string of any length: ";
	cin >> s;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i%2!=0]) {
			cout << s[i];
		}
	}
	cout << endl << endl;

	// cout << getMax(10, 15.5) << endl;

	// cout << getAsciiValue('A') << endl;
	cout << "\n3.\n";
	int o = 5;

	for (int r = 1; r <= o; ++r) {
		for (int c = 1; c <= o; ++c) {
			if (c <= r) {
				cout << "x";
			}
			else
				cout << " ";
		}
		cout << endl;
	}

	cout << endl << endl;
	int x;
	do {
		cout << "Enter an int: ";
		cin >> x;
	} while (x % 10 != 0);
	



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

*/