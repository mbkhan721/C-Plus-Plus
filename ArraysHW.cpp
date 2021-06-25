#include<iostream>
#include<time.h>
using namespace std;


int main() {

	cout << "\n1. " << "\n";
	int a[5];								// declare an array of 5 integers

	for (int i = 0; i < 5; i++) {
		cout << "[" << i << "] = ";
		cin >> a[i];						// input values from the console into the array
	}
	cout << "\nArray: ";
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";				// loop to output the array
	}

	int min = a[0];
	for (int i = 1; i < 5; i++) {			// iterate from the second to last value of the array
		if (min > a[i]) {					// if the current min is larger then the current value
			min = a[i];						// replace min with the current value
		}
	}
	cout << "\nMin: " << min << endl;		// determine the smallest element in the array.

	int max = a[0];
	for (int i = 1; i < 5; i++) {			// iterate from the second to last value of the array
		if (max < a[i]) {					// if the current max is smaller then the current value
			max = a[i];						// replace max with the current value
		}
	}
	cout << "\Max: " << max << endl;		// determine the largest element in the array.












	cout << endl;
	return 0;
}