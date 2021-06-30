#include<iostream>
#include<time.h>
using namespace std;

// --------------------------------------------- 1
void init(int* a, const int size) {
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 10;
	}
}
void print(int* a, const int size) {
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
}
double averageDiff(int *a, int size) {
	double sum = 0;
	for (int i = 1; i < size; i++) {
		sum = a[i] - a[i - 1];
		if (sum < 0) {
			sum = -sum;
		}
		cout << " Sum = " << sum << ", ";
		sum /= i;
		cout << " Divided = " << sum << ", ";
	}
	return sum;
}



int main() {

	// --------------------------------------------- 1
	cout << "\n1.\n";

	srand(time(NULL));
	const int SIZE = 10;
	int a[SIZE];					// Declaring array

	init(a, SIZE);					// Calling funt to initialize
	print(a, SIZE);					// Print the array

	cout << "\nAverage gap = " << averageDiff(a, SIZE);	







	cout << endl;
	return 0;
}