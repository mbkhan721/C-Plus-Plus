#include<iostream>
using namespace std;

int loopPrac() {
	cout << endl;
	/*
	cout << "Loop Practice 1)\nDo While:\n"; // 1. Do while
	int x;

	do {
		cout << "Enter a value for x that is greater than 10: ";
		cin >> x;
	} while (x <= 10);

	cout << x << " is valid" << endl;
	

	cout << "\nLoop Practice 1)\nWhile Loop:\n"; // 1. While
	int x;
	cout << "Enter a value for x that is greater than 10: ";
	cin >> x;
	while (x <= 10) {
		cout << "Enter a value for x that is greater than 10: ";
		cin >> x;
	}
	cout << x << " is valid" << endl;
	

	cout << "\nLoop Practice 5)\nSentinel Loop:\n\n"; // 5. Sentinel While
	int option = 0;

	while (option != 3) {
		cout << "Vending Machine" << endl;
		cout << "1) Coke\n";
		cout << "2) Water\n";
		cout << "3) Off\n";
		cout << "Select: ";
		cin >> option;
		cout << endl;

		switch (option) {

		case 1:
			cout << "You selected a Coke.\n\n";
			break;
		case 2:
			cout << "You selected a Water.\n\n";
			break;
		case 3:
			cout << "Program ending.\n\n";
			break;
		default:
			cout << "Invalid option!\n\n";
			break;
		}
	}
	cout << "\n\nExiting Program..." << endl;
	
	
	
	cout << "\nLoop Practice 6)\nWhile Loop:\n\n"; // 6. While Loop
	
	int countdown = 10;
	while (true) {
		cout << countdown << endl;
		--countdown;
		if (countdown < 1) {
			cout << "Happy New Year!" << endl << endl;
			break;
		}
	}

	// 6.
	int x = 10;
	while (x >= 1) {
		cout << x << endl;
		--x;
	}
	cout << "Happy New Year!" << endl << endl;
	
	
	cout << "\nLoop Practice 7)\nFor Loop:\n\n"; // 7. For Loop
	
	int counter = 11;
	for (int i = 1; i <= 10; ++i) {
		counter--;
		cout << counter << endl;
	}
	cout << "Happy New Year!" << endl << endl;

	// 7.
	for (int x = 10; x >= 1; --x) {
		cout << x << endl;
	}
	cout << "Happy New Year!" << endl << endl;
	
	
	cout << "\nLoop Practice 8)\nFor Loop:\n\n"; // 8. For Loop

	for (int i = 40; i >= 20; --i) {
		if (i % 2 == 0) {
			cout << i << " ";
		}		
	}
	cout << endl;
	
	
	cout << "\nLoop Practice 9)\nFor Loop:\n\n"; // 9. For Loop

	for (int i = 11; i < 30; ++i) {
		if (i % 3 != 0) {
			cout << i << " ";
		}
		
	}		
	cout << endl;
	
	
	
	cout << "\nLoop Practice 10)\nFor Loop:\n\n"; // 10. For Loop

	int min;
	int max;
	cout << "Enter a min and max value: ";
	cin >> min >> max;
	for (int i = min; i <= max; ++i) {
		cout << i << " ";
	}
	cout << endl;
	
	
	cout << "\nLoop Practice 1)\nFor Loop:\n\n"; // 11. For Loop

	int min;
	int max;
	do {
		cout << "Enter a min and max value: ";
		cin >> min >> max;
	} while (min >= max);
	for (int i = max - 1; i > min; --i) {
		if (i % 2 != 0) {
			cout << i << " ";
		}
	}
	*/
	cout << endl;
	return 0;
}