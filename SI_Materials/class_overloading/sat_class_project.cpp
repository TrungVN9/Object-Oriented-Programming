#include<iostream>
#include "sat_project_header.h"
using namespace std;

/*
    Writing a class Calculator that can perform multiplication, subtraction, addition and division.
*/

int main(){
    Calculator cal1(10.0, 15.0);

    if (cal1.multiplication() != 150){
        cout << "Multiplication Not Incorrect!" << endl;
    }
    else{
        cout << "Multiplication Correct!"<< endl;
    }
    if (cal1.division() != 1.5){
        cout << "Division Not Incorrect!" << endl;
    }
    else{
        cout << "Division Correct!"<< endl;
    }
    if (cal1.subtraction() != 5){
        cout << "Subtraction Not Incorrect!" << endl;
    }
     else{
        cout << "Subtraction Correct!"<< endl;
    }
    if (cal1.addition() != 25){
        cout << "Addition Not Incorrect!" << endl;
    }
     else{
        cout << "Addition Correct!"<< endl;
    }
    return 0;
}