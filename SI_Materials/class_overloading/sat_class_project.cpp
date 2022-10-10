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
    
    Calculator cal2;
    float num_1;
    float num_2;
    cout <<"Enter num1: ";
    cin >> num_1;
    cout << "Enter num2: ";
    cin >> num_2;
    cal2.set_num1_num2(num_1, num_2);
    cout << "Your num1 and num2 are " << cal2.get_num1() << "  " << cal2.get_num2() << endl;
    cout << "Num 1 * Num 2: " << cal2.multiplication() << endl;
    cout << "Num 2 / num 1: " << cal2.division() << endl;
    cout << "Num 1 + Num 2: " << cal2.addition() << endl;
    cout << "Num 2 - Num 1: " << cal2.subtraction() << endl;
    return 0;
}