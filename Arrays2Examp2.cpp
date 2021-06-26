#include<iostream>
using namespace std;

const int TYPES = 3;			// Global Constant: A constant that is declared before main()
const int BRANDS = 4;			// That means I can access it anywhere in the program

void print(string dr[], string br[][BRANDS]) {
	for (int i = 0; i < TYPES; i++) {
		cout << dr[i] << ": ";								// Printing out the 1st dimension drinks[]
		for (int j = 0; j < BRANDS; j++) {
			cout << br[i][j] << ", ";						// The inner loop prints out i by j
		}
		cout << "\n";
	}
}


int main() {

	cout << "\n1 Dimension and 2 Dimension Arrays Combined.\n\n";
	// The index in the first array is equivalent to a type in the 2nd array.

	string drinks[TYPES];								// 1D array

	drinks[0] = "Water";
	drinks[1] = "Soda";
	drinks[2] = "Alcohol";

	string brands[TYPES][BRANDS];						// 2D array / 3x4

	brands[0][0] = "Avian";
	brands[0][1] = "Aquafina";
	brands[0][2] = "Poland";
	brands[0][3] = "Nestle";

	brands[1][0] = "Coke";
	brands[1][1] = "Pepsi";
	brands[1][2] = "Sprite";
	brands[1][3] = "Gingerale";

	brands[2][0] = "Vodka";
	brands[2][1] = "Taquilla";
	brands[2][2] = "Gin";
	brands[2][3] = "Whiskey";

	print(drinks, brands);			// Size is not included because we went around it by creating global variables.

	// This is a combination of 2 string arrays, it can also be string, int or string, double
	

	// Left video at 32:26 PARTIALLY FILLED ARRAY



	cout << endl;
	return 0;
}