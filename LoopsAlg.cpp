#include<iostream>
#include <string>
#include<cmath>
using namespace std;

int main() {
	cout << endl;
	/*
	// 1.
	for (int i = 0; i <= 20; ++i) { 
		if (i % 2 == 0) {
			cout << i << " ";
		}		
	}
	cout << endl;

	// 1.
	for (int i = 0; i <= 20; i += 2) {
		cout << i << " ";
	}
	cout << endl;

	// 2.
	long long n;
	int numDigits = 0;

	cout << "Enter a three or more digit value: ";
	cin >> n;
	
	while (n > 0) {
		n /= 10;
		++numDigits;
	}
	cout << numDigits << " digits" << endl;
	cout << endl;
	
	// 3.
	long long n;
	
	cout << "Enter a three or more digit value: ";
	cin >> n;
	
	while (n > 0) {
		cout << n % 10 << endl;
		n /= 10;
	}


	// 4.
	// if n = 23456
	// rn = 0*10 + 6; n=2345
	// rn = 6*10 + 5; n = 234 
	// rn = 65*10 + 4; n = 23
	// rn = 654*10 + 3; n = 2
	// rn = 6543*10 + 2; n = 0
	// rn = 65432; 
		
	long long n;
	long long rn = 0;
	cout << "Enter a three or more digit value: ";
	cin >> n;
	
	while (n > 0) {
		rn = rn * 10 + n % 10;
		n /= 10;
		cout << "N: " << n << " RN: " << rn << endl;
	}
	cout << "Reversed: " << rn << endl;
	

	// 5.
	string s = "Make this filename web friendly.txt";
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == ' ') {
			s[i] = '_';
		}
	}
	cout << s << endl << endl;
	

	//6.
	string s = "Hello, how are you?";
	int words = 1;
	for (int i = 1; i < s.length(); ++i) {
		if (s[i] == ' ') {
			words++;
		}		
	}
	cout << words << " word(s)" << endl;
	

	// 7.
	// if s == "Bilal Khan";
	// s == Bilal Khan, i = 0, temp=B, s[0]=n, s[9]=B,
	// s == nilal KhaB, i = 1, temp=i, s[1]=a, s[8]=i,
	// s == nalal KhiB, i = 2, temp=l, s[2]=h, s[7]=l,
	// s == nahal KliB, i = 3, temp=a, s[3]=k, s[6]=a,
	// s == nahKl aliB, i = 4, temp=l, s[4]= , s[5]=l,
	// s == nahK laliB, i = 5, end loop
	string s;
	cout << "Enter a string: ";
	getline(cin, s);
	int len = s.length();

	for (int i = 0; i < len / 2; ++i) { // iterate from start to middle of the string (length/2)
		char temp = s[i];						// backup current element
		s[i] = s[len - i - 1];			// replace current element with its mirror element
		s[len - i - 1] = temp;			// replace mirror element with original element
		cout << s << endl;
	}
	cout << "\n" << s << endl;
	

	// 8.
	int n;
	cout << "Enter a value for n: ";
	cin >> n;

	cout << "Factors: ";
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {				// is i a factor of n || is n a multiple of i
			cout << i << " ";
		}
	}
	

	// 9.
	long long b = 11;
	int counter = 0;
	for (int i = 1; i <= b; ++i) {
		if (b % i == 0) {
			counter++;
		}		
	}
	cout << "Counter: " << counter << endl;
	if (counter == 2) { // multiplies by 1 and itself
		cout << b << " is a prime number." << endl;
	}
	else
	{
		cout << b << " is not a prime number." << endl;
	}
	

	// 10.
	long long b = 1234567966;
	bool isPrime = true;
	for (int i = 2; i < b; ++i) {
		if (b % i == 0) {
			isPrime = false;
			break;
		}
	}
	if (isPrime) { // multiplies by 1 and itself
		cout << b << " is a prime number." << endl;
	}
	else
	{
		cout << b << " is not a prime number." << endl;
	}
	

	// 11.
	long long b = 11;
	bool isPrime = true;
	for (int i = 2; i <= sqrt(b); ++i) {
		if (b % i == 0) {
			isPrime = false;
			break;
		}
	}
	if (isPrime) { // multiplies by 1 and itself
		cout << b << " is a prime number." << endl;
	}
	else
	{
		cout << b << " is not a prime number." << endl;
	}
	*/
	




	return 0;
}