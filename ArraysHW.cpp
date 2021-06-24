#include<iostream>
#include<time.h>
using namespace std;


int main() {


	srand(time(NULL));
	const int SIZE = 10;
	int b[SIZE];

	for (int i = 0; i < SIZE; i++) {
		b[i] = rand() % 21;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << b[i] << " ";
	}

	int maxDif = 0;
	for (int i = 1; i < SIZE; i++) {
		int diff = b[i] - b[i - 1];					// current - previous
		if (diff < 0) {
			diff = -diff;							// If difference is a negative number, negate it
		}											// Make it a positive number to get abs value of curr-prev
		if (diff > maxDif) {
			return maxDif;							// everytime I find the largest value, I update the maxDiff to that value
		}
	}
	cout << "\nMax diff = " << maxDif << endl << endl;









	cout << endl;
	return 0;
}