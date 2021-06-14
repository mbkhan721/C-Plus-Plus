#include<iostream>
#include<string>
using namespace std;

//int getFirstIndex(string s, char c);

// string reverse(string s);

void validate(string s);

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
	*/
	// 3.
	cout << "\n3.\n";
	validate("2!a!a!");

	// 4.
	cout << "\n4.\n";




	cout << endl;
	return 0;
}
/*
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
*/
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