#include<iostream>
using namespace std;

int main() {
	cout << endl;
	/*
	cout << endl;
	int x = 10;
	
	while (x >= 10) {
		cout << x << "\n";
		--x;
	}
	cout << "Happy New Year!\n";
	cout << endl;

	for (x = 10; x >= 1; --x) {
		cout << x << " \n";
	}
	cout << "happy new year";
	cout << endl;

	for (int j = 40; j >= 20; j -= 2) {
		cout << j << " ";
		--j;
	}
	cout << endl << endl;
	
	// 10.
	int min, max;
	cout << "Enter a min and max value: ";
	cin >> min >> max;

	if (min > max) {
		int backup = min;
		min = max;
		max = backup;
	}

	for (int i = min; i <= max; ++i) {
		cout << min << " ";
	}
	
	// 11.
	int min, max;
	cout << "Enter a min and max value: ";
	cin >> min >> max;

	while (max >= min) {
		cout << "Enter a min and max: ";
		cin >> min >> max;
	}
	for (int i = max-1; i > min; --i) {
		if (i % 2 != 0) {
			cout << i << " ";
		}
	} 
	
	cout << endl << endl;

	// 2.
	int num, count;

	cout << "Enter a value for n: ";
	cin >> num;

	count = 0;
	while (num != 0) {
		num /= 10;
		count += 1;
	}
	cout << count << " digits.";
	
	// while loop
	int n;
	cout << "Enter a number between 1 and 10 inclusive: ";
	cin >> n;
	while (n < 1 || n > 10) {
		cout << "Invalid value, enter a num bet 1 & 10 inclusive: ";
		cin >> n;
	}
	cout << "\nProgram continues if value is valid or invalid.\n";
	

	// Do While loop *************************************************
	int n;
	do {
		cout << "Enter a number between 1 and 10 inclusive: ";
		cin >> n;
	} while
		(n < 1 || n > 10);
	cout << "\nProgram continues if value is valid or invalid.\n";
	

	// For loop *************************************************
	for (int i = 1; i < 11; ++i) {
		cout << i << " ";
	}
	cout << "\n\n";
	--------------------------------------------------- */
	/* 
	for (initialize var, condition, update var) {
		code to repeat
	}

	variable updated to eventually make the condition false
	variable initialized with value a
	condition specifies the limit b
	variable updated every iteration to eventually reach b
	*/
	/*
	for (int i = 20; i >= 10; --i) {
		cout << i << " ";
	}
	

	// while loop
	cout << "\n\nWhile Loop:\n" << endl;
	int i = 1;
	while (i < 11) {
		cout << i << " ";
		++i;
	}
	*/

	int n;
	cout << "Enter an integer: ";
	cin >> n;

	int summation = 0, factorial = 1;
	// summation is adding every value from a to b

	for (int i = 1; i <= n; ++i) {
		summation += i;
	}
	for (int i = 1; i <= n; ++i) {
		factorial *= i;
	}

	cout << summation << "\n";
	cout << factorial << "\n";
	









	cout << endl;
	return 0;
}