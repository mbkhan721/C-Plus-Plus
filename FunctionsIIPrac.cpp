#include<iostream>
#include<time.h>
using namespace std;
/*
void swap(int &a, int &b) {														// this is a PASS BY REFERENCE
	int temp = a;
	a = b;
	b = temp;

}

void winNums(int &e, int &f, int &g, int &h, int &i, int &j) {					// this is a PASS BY REFERENCE
	
	e = rand() % 75 + 1;
	f = rand() % 75 + 1;
	g = rand() % 75 + 1;
	h = rand() % 75 + 1;
	i = rand() % 75 + 1;
	j = rand() % 15 + 1;
}

// -----------------------------------------------------------------------------------------------------------------
int main() {
	
	// 1.
	int x, y, backup;
	cout << "\n1.\nSwap values\n";
	cout << "Enter two integers: ";
	cin >> x >> y;
	cout << "x: " << x << ", y: " << y << endl; // 10, 5
	backup = x; // backup = 10
	x = y; // x = 5
	y = backup; // y = 10 
	cout << "\nSwapped values:\nx: " << x << ", y: " << y << endl;

	// 2.
	cout << "\n2.\nSwap function\n";
	int c, d;
	cout << "Enter two integers: ";
	cin >> c >> d;
	cout << "x: " << c << ", y: " << d << endl;
	swap(c, d);
	cout << "\nSwapped values:\nx: " << c << ", y: " << d << endl;
	
	// 3.
	cout << "\n3.\nWinning numbers\n";
	srand(time(NULL));
	int e, f, g, h, i, j;
	winNums(e, f, g, h, i, j);
	cout << "The winning numbers are: " 
		<< e << " " << f << " " << g << " " <<
		h << " " << i << " mega: " << j << endl;




	cout << endl;
	return 0;
}
*/