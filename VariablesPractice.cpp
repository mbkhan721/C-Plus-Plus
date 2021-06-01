#include<iostream>
using namespace std;

int main() {
	/*
	char c;
	cout << "Enter a lowercase letter: ";
	cin >> c;
	
	// covert c into integer
	// int i = c; implicit
	int i = static_cast<int>(c);

	// substract 32 from integer equivalent
	i -= 32;
	// convert modified integer back into character and store into c
	c = i; // implicit
	// c = static_cast<char>(i); // explicit

	/*
	* This is a single line solution 
	* c = static_cast<char>(static_cast<int>(c)-('a'-'A'));	
	*/

	// cout << "The uppercase equivalent is " << c << endl;
	

	/*
	// 1.
	string name;
	string middleI;
	int age;
	bool course;
	double gpa;
	cout << "What is your name? ";
	cin >> name; 
	cout << endl;
	cout << "What is your middle initial? ";
	cin >> middleI;
	cout << endl;
	cout << "What is your age? ";
	cin >> age;
	cout << endl;
	cout << "Is this course ET575? ";
	cin >> course;
	cout << endl;
	cout << "What is your gpa? ";
	cin >> gpa;
	cout << endl << endl;

	cout << "You answered:\n"
		<< name << ", "
		<< middleI << ", "
		<< age << ", "
		<< course << ", "
		<< gpa << ", "
		<< endl;
	*/

	return 0;
}