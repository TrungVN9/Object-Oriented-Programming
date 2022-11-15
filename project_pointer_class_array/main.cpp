//Example about aRRAYS & Pointers.
#include <string> 
#include <array>
#include <iostream> 
#include "header.h" 

using namespace std;

int main() {
	// array of student grades
	const int gradesCS201[15]{ 87, 68, 94, 100, 83, 78, 85, 91, 76, 87, 88, 56, 75, 69, 92 };  //Redeclare these arrays so that we can
	const int gradesCS211[15]{ 65, 86, 74, 90, 93, 87, 81, 55, 96, 77, 95, 56, 69, 79, 81 };   //pointers to represent them.

	string courseNameCS201 = "CS 201";
	string courseNameCS211 = "CS 211";

	const int *ptrCS201{ gradesCS201 };    //Create 2 pointers represent the above arrays.
	const int *ptrCS211{ gradesCS211 };

	GradeBook myGradeBookCS201(courseNameCS201, ptrCS201);    //Create 2 objects of the class GradeBook.
	GradeBook myGradeBookCS211(courseNameCS211, ptrCS211);

	myGradeBookCS201.outputGrades(ptrCS201, ptrCS211, courseNameCS201, courseNameCS211);   //Output the result of both Math classes.

	cout << "\n\nThe average for CS 201 is: " << fixed << setprecision(2) << myGradeBookCS201.getAverage(ptrCS201) << endl;
	cout << "        " << setw(4) << fixed << setprecision(2) << setw(19) << "========"
		<< setw(15) << "========" << endl;
	cout << "Average: " << setw(4) << fixed << setprecision(2) << setw(18) << myGradeBookCS201.getAverage(ptrCS201)
		<< setw(15) << myGradeBookCS211.getAverage(ptrCS211) << endl;

	cout << "Above Average: " << fixed << setprecision(0) << setw(12) << myGradeBookCS201.getAboveAvg(ptrCS201)
		<< setw(15) << myGradeBookCS211.getAboveAvg(ptrCS211) << endl;
	cout << "Below Average: " << fixed << setprecision(0) << setw(12) << size(gradesCS201) - myGradeBookCS201.getAboveAvg(ptrCS201)
		<< setw(15) << size(gradesCS211) - myGradeBookCS211.getAboveAvg(ptrCS211) << endl;

	return 0;
}


