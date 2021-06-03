#include<iostream>
using namespace std;

int stringsHW() {
	cout << endl; 
	string first; // a.
	string last;

	first = "John";
	last = "Smith"; // b.

	string name = first + " " + last; // c.

	cout << "Name: " << name << endl << endl; // d.

	cout << "Length: " << name.length() << endl << endl; // e.

	cout << "Name: " << name.insert(5, "H. ") << endl << endl; // f. g. 

	cout << "Initials: " 
		<< name[0]
		<< "." 
		<< name[5]
		<< "." 
		<< name[8]
		<< "." 
		<< endl 
		<< endl;


	return 0;
}