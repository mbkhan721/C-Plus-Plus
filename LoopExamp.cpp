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
	

	int n;
	cout << "Enter an integer: ";
	cin >> n;

	int summation = 0, factorial = 1;
	// summation is adding every value from a to b

	for (int i = 1; i <= n; ++i) {
		summation += i;
	}
	for (int i = n; i >= 1; --i) {
		cout << "i " << i << " Factorial: " << factorial << "\n";
		factorial *= i;
	}

	cout << summation << "\n";
	cout << factorial << "\n";
	


	int n, numMultiples;
	cout << "Enter an integer: "; // 2
	cin >> n;
	cout << "Enter the number of multiples: "; // 6
	cin >> numMultiples;
	cout << endl;

	for (int i = 1; i <= numMultiples; ++i) { 
		cout << i << " * " << n << " = " << (i * n) << endl; // will print out 6 if input is 2 and 6
	}
	

	// Sentinel Loop ********************************************************
	int n = 0;
	while (n != -1) { // -1 is the sentinel value
		cout << "Enter any positive int or -1 to end loop: "; // message will keep repeating until -1 is input
		cin >> n;
	} // while the person does not exit the program, keep running the program
	


	int n = 0;
	int counter = 0;

	while (n != -1) {
		cout << "Enter a positive int or -1 to end loop: ";
		cin >> n;
		++counter;
	}
	cout << "Program Looped: " << counter << " time(s)." << endl;
	

	
	// Sentinel Loop
	int option = 0;
	while (option != 3) {
		cout << "1) Press Play " << endl;
		cout << "2) Press Pause " << endl;
		cout << "3) Exit Program " << endl;
		cout << "Select option: ";
		cin >> option;
		cout << endl;

		switch (option) {
		case 1:
			cout << "Playing 1.\n" << endl;
			break;
		case 2:
			cout << "Paused 2.\n" << endl;
			break;
		case 3:
			cout << "Ending program 3.\n" << endl;
			break;
		default:
			cout << "Invalid option, try again.\n" << endl;
		}
	}
	cout << "\nExiting program. " << endl;
	



	// Break
	int n = 9;
	for (int i = 1; i <= n; ++i) {
		if (i * i == n) {
			cout << "Square root found\n" << " i " << i << " n " << n << "\n";
			break;
		}
	}
	


	int counter = 1;
	while (true) {
		cout << counter << " ";
		++counter;
		if (counter > 10) {
			break;
		}
	}
	

	// Continue
	for (int i = 1; i <= 10; ++i) {
		//if (i % 2 == 0) { // skip even values
		if (i == 5 || i == 8) { // skip 5 and 8
		// if (i == 5) {
			// break;
			continue;
		}
		cout << i << "\n"; // print odd values
	}
	*/



	// exit
	int option;
	cout << "Enter a 1 to exit or a 2 to continue: ";
	cin >> option;
	cout << endl;

	if (option == 1) {
		exit(1);
	}
	cout << "You decided to continue the program." << endl;




	






	cout << endl;
	return 0;
}