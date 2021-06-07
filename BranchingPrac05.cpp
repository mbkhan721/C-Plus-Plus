#include<iostream>
using namespace std;

int branPrac() {
	/*
	// 1.
	cout << endl;
	
	int f;
	cout << "Enter an integer: ";
	cin >> f;
	
	cout << (f % 2 == 0) << endl << endl;

	
	// 2.
	int g;
	cout << "Enter an integer: ";
	cin >> g;

	cout << (g % 5 != 0) << endl << endl;

	
	// 3.
	int x = 3, y = 2, z = 1;
	cout << ((x > y) || (y == z)) << endl;
	cout << ((y >= z) && !(x == 3)) << endl;
	cout << ((x < 4) || ((z == x) && !(x == 3))) << endl << endl;

	// 4.
	int x = 3, y = 2, z = 1;
	cout << ((x > y) || (y == z)) << endl;
	cout << ((y >= z) && !(x == 3)) << endl;
	cout << ((x < 4) || ((z == x) && !(x == 3))) << endl << endl;
	cout << "Negated: " << endl;

	cout << ((x <= y) && (y != z)) << endl;
	cout << ((y < z) || (x == 3)) << endl;
	cout << ((x >= 4) && ((z != x) && (x == 3))) << endl << endl;
	
	// 5.
	int f;
	cout << "Enter an integer: ";
	cin >> f;
	cout << ((f % 3 == 0) && (f % 7 != 0)) << endl << endl;
	
	
	// 6.
	int g;
	cout << "Enter an integer: ";
	cin >> g;
	cout << ((g % 2 != 0 && g <= 20) || (g > 50)) << endl << endl;

	
	// 8.
	int h;
	cout << "Enter an integer: ";
	cin >> h;
	if ((h % 5 == 0) && (h % 3 == 0)) {
		cout << h << " is multiple of 5" << endl;
		cout << h << " is multiple of 3" << endl;
	}
	else if (h % 5 == 0) {
		cout << h << " is multiple of 5" << endl;
	}
	else if (h % 3 == 0) {
		cout << h << " is multiple of 3" << endl;
	}
	
	// 9.
	bool goMovies;
	bool goDinner;
	cout << "Go movies? ";
	cin >> goMovies;
	cout << "Go dinner? ";
	cin >> goDinner;

	if (goMovies && goDinner == 1) {
	cout << "You cannot do both";
	}
	else if (goMovies) {
		cout << "You are going to the movies";
	}
	else if (goDinner) {
		cout << "You are going to dinner";
	}
	else if (!goMovies && !goDinner) {
		cout << "You must do something";
	}
	*/
	// 10.
	int i;
	cout << "Enter an int: ";
	cin >> i;
	
	if (i <= 0) {
		cout << i << " is not valid" << endl;
	}
	else {
		if (18 % i == 0) 
			cout << i << " is a factorial of 18" << endl;
		else
			cout << i << " is not a factorial of 18" << endl;
	}








	cout << endl;
	return 0;
}