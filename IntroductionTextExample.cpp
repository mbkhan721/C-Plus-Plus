#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

int ite() {
	
	// 1.
	cout << endl;
	string collName;
	cout << "What is the name of your college? ";
	getline(cin, collName);
	cout << "Your college is " << collName << "." << endl << endl;

	// 2.
	cout << left << setw(8) << "Class" << setw(32) << " Topic" << setw(10) << "Year" << endl;
	cout << left << setw(8) << "ET575" 
		<< setw(32) << " Procedural Programming" 
		<< setw(10) << "Freshman" 
		<< endl;
	cout << left << setw(8) << "ET580" 
		<< setw(32) << " Object-Oriented Programming" 
		<< setw(10) << "Sophmore" 
		<< endl << endl;

	return 0;
}