#include <array>
#include <iostream>
#include <cstddef>
#include <string>
#include <iomanip>
//#include "Array_Multidimension_Pointer1.h"

using namespace std;

const size_t arraySize{ 11 };

int main()
{
	srand(static_cast<unsigned int>(time(0)));  //Generate a random number based on the computer timer.
//	static array<string, arraySize> name{ "Don Duck", "Picky Mouse", "Sponge Hed", "Suber Min", "Spider Web", "Bad Man", "Robin Hud", "Sknow Why", "Unkown Char", "Believe Me"};

	static array<array<int, arraySize>, 5> proj1{
		59, 78, 89, 93, 91, 62, 45, 55, 85, 81, 0,  //The 11th column is the row sum. It will be populated later.
		89, 75, 72, 96, 98, 90, 56, 67, 45, 82, 0,
		96, 63, 87, 96, 95, 83, 62, 84, 56, 78, 0,
		85, 79, 57, 51, 63, 90, 78, 72, 92, 83, 0,
		73, 70, 71, 93, 88, 66, 87, 74, 55, 68, 0
	};

	cout << "\n\n";

	for (int i{ 0 }; i < 5; i++) {
		int sumRow{ 0 };
		for(int j{ 0 }; j < arraySize; j++){
		   sumRow += proj1[i][j];
		}
		proj1[i][arraySize - 1] = sumRow;
	}

	for (int i{ 0 }; i < 5; i++) {
		for (int j{ 0 }; j < arraySize; j++) {
			cout << proj1[i][j] << "     ";
		}
		cout << endl;
	}

	//Create an array of pointer of type "int" to represent the 
	//rows in the 2-dimensional array proj1[][].
	int *arrR[5];   

	//Assign row elements of the array proj1[i][0] to each pointer *arrR[i]. 
	//Note that we only assign a row to a pointer; thus the index of the 
	//column is always zero (0).

	//	arrR[0] = &proj1[0][0];
	//	arrR[1] = &proj1[1][0];
	//	arrR[2] = &proj1[2][0];
	//	arrR[3] = &proj1[3][0];
	//	arrR[4] = &proj1[4][0];

	for (int i{ 0 }; i < 5; i++) {
		arrR[i] = &proj1[i][0];
	}

	cout << "\n\n";

	for (int i{ 0 }; i < 5; i++) {
		for (int j{ 0 }; j < arraySize; j++) {
			cout << *(arrR[i] + (j)) << "     ";
		}
		cout << endl;
	}  //End of outer FOR.
	cout << endl;

	cout << "\n\n"; 
	//	stuGrade stu;

	//	stu.initArr(proj1, proj2, proj3, mid1);  //Initialize proj1, proj2, proj3.
	//	stu.display(name, proj1, proj2, proj3, mid1);
	//	cout << "\n\n";
	//	stu.display2(name, proj1, proj2, proj3, mid1);
}

