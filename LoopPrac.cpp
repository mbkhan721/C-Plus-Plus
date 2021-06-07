#include<iostream>
using namespace std;

int loopPrac() {

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
	/*
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
	*/
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





	return 0;
}