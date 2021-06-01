#include<iostream>
using namespace std;

int ste() {
	
	// 1.
	cout << endl;
	string word = "Microsoft"; // 1
	cout << word << endl; // 2
	cout << word[1] << endl; // 3
	cout << word[word.length()-2] << endl << endl; // 4

	// 2.
	string s = "City University of New York"; //1
	s.erase(5, 11);
	cout << s << endl;

	return 0;
}