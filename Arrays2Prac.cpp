#include<iostream>
using namespace std;

void init(int* a, int capacity) {
	for (int i = 0; i < capacity; i++) {
		a[i] = (i * 10) + 10;
	}
}

void print(int* a, int capacity) {
	for (int i = 0; i < capacity; i++) {
		cout << a[i] << " ";
	}
}


int main() {

	cout << "\n1.\n";
	const int CAPACITY = 10;
	int firstArr[CAPACITY];

	init(firstArr, CAPACITY);			// Initializing the firstArr array
	print(firstArr, CAPACITY);			// Printing the array




	cout << endl;
	return 0;
}