/*
f(x) = x^3 + 5x^2 + 7x + 2
Find all solutions of f(x) using looping control.
(-10^6, 10^6)
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // double start_x = pow(-10,6);
    // double end_x = pow(10,6);
    int count_x = 0;
    for (int start_x = -1000000; start_x <= 1000000; start_x++)
    {
        if ((pow(start_x, 3) + 5 * pow(start_x, 2) + 7 * start_x + 2) == 0)
        {
            cout << "The integral solution of f(x) = x^3 + 5x^2 + 7*x + 2 are: \n";
            cout << "\tf(" << start_x << ") \t= (" << start_x << ")^3 + 5*(" << start_x << ")^2 + 7*(" << start_x << ")+2" << endl;
            cout << "\t\t= " << pow(start_x, 3) + 5 * pow(start_x, 2) + 7 * start_x + 2 << endl;
            cout << "============" << endl;
            count_x += 1;
        }
    }
    cout << "There are: " << count_x << " solutions!!!" << endl;
    return 0;
}
