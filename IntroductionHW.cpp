#include<iostream>
#include<iomanip>
using namespace std;

int introHW() {
	/*
	// 1.
	cout << endl;
	string fName;
	string lName;

	cout << "Input your first name: ";
	cin >> fName;
	cout << "Input your last name: ";
	cin >> lName;
	cout << endl;

	cout << fName << " " << lName << endl; // Separated by space
	cout << fName << "\t" << lName << endl; // Separated by tab
	cout << fName << "\n" << lName << endl << endl; // Separated by line
	*/
	// 2.
	cout << "Shopping Cart" << endl;
	cout << "-------------------------------" << endl;
	cout << left << setw(5) << "#" << setw(20) << "Item" << setw(6) << "Cost" << endl << endl;
	cout << left << setw(5) << "1" << setw(20) << "Chalupa" << setw(6) << "$1.50" << endl;
	cout << left << setw(5) << "2" << setw(20) << "Soft Taco Supreme" << setw(6) << "$1.00" << endl;
	cout << left << setw(5) << "1" << setw(20) << "Meximelt" << setw(6) << "$2.50" << endl << endl;
	cout << left << setw(5) << " " << setw(20) << "Subtotal:" << setw(6) << "$5.00" << endl;

	return 0;
}