#include<iostream>
#include<cmath>
#include<time.h>
using namespace std;

int main() {
	/*
	cout.setf(ios::fixed);
	cout.precision(2);

	float money;
	int num;
	cout << "Enter money: $";
	cin >> money;

	num = money / 0.25;
	cout << "Number of quarters is " << num << endl;
	cout << "Change is $" << (money - num * 0.25) << endl << endl;
	
	// 2.
	int a;
	cout << "Enter a number: ";
	cin >> a;
	
	cout << "Square root of " << a << " is " << sqrt(a) << endl;
	cout << "Is "<< a <<" a perfect square ? " << ( sqrt(a) == floor(sqrt(a)) ) << endl << endl;
	
	// 3.
	int b;
	cout << "Enter a three-digit number: ";
	cin >> b;
	int c = b; // Backup
	
	cout << b % 10 << endl;
	b /= 10;
	cout << b % 10 << endl;
	b /= 10;
	cout << b % 10 << endl;
	
	cout << "Original: " << c << endl << endl;
	
	// 4.
	int c;
	int d;
	int e;
	cout << "Enter a value for n: ";
	cin >> c;
	cout << "Enter a multiple of n: ";
	cin >> d;
	cout << "enter a factor of n: ";
	cin >> e;

	cout << "Is " << e << " a factor of " << c << "? ";
	cout << (c % e == 0) << endl;
	cout << "Is " << d << " a multiple of " << c << "? ";
	cout << (d % c == 0) << endl << endl;
	*/
	// 5.
	srand(time(NULL));
	cout << "Random value between 0 and 10 inclusive: " << rand() % 11 << endl;
	cout << "Random value between 1 and 5 inclusive: " << rand() % 5 + 1 << endl;
	cout << "Random value between -4 and 2 inclusive: " << rand() % 7 - 4 << endl;
	cout << "Random value between 10 and 20 exclusive: " << rand() % 9 + 11 << endl;
	cout << "Random value between 5 and 9 exclusive: " << rand() % 3 + 6 << endl << endl;




	//cout.setf(ios::fixed);
	float dollars;

	dollars = 5;
	cout << dollars << endl;

	cout.setf(ios::fixed);

	cout << dollars << endl;
	
	cout.precision(2);
	cout << dollars << endl;



	return 0;
}