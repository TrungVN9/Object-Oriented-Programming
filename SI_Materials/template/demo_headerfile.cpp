#include <iostream>
#include "math_func.h"

using namespace std;

int sub_two_nums(int num1, int num2);
double sub_two_nums(double num1, double num2);
int square_nums(int num1);
double square_nums(double num1);

int main()
{
    cout << "Subtraction num2 - num1: " << sub_two_nums(10, 20) << endl;
    cout << "Subtraction num2 - num1: " << sub_two_nums(10.4, 20.18) << endl;
    cout << "Square of int num: " << square_nums(5) << endl;
    cout << "Square of double num: " << square_nums(3.5) << endl;

    return 0;
}
