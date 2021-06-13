#include<iostream>
using namespace std;

int sum(int a, int b) {
	return a + b;
}

int getNumber() {
	int n;
	cout << "\nEnter a number: ";
	cin >> n;
	return n;
}




int main() {
	cout << endl;

	// double sum(double a, int b) { // definition + parameters (the specification data)
	// sum(5.5, 10) // inside funtion body is the argument (the actual data)
	// }
	
	cout << "1st function: " << sum(5, 6) << endl;
	cout << "2nd function: " << getNumber() << endl;





	cout << endl;
	return 0;
}