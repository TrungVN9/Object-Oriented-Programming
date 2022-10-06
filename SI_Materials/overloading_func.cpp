#include <iostream>

using namespace std;

// 1. Maximum 2 numbers
// 2. Addition 2 numbers.
// 3. Subtraction 2 numbers.
int max_2_nums(int num1, int num2)
{
    int temp_max = num1;
    if (temp_max < num2)
    {
        temp_max = num2;
    }
    return temp_max;
}
double max_2_nums(double num1, double num2)
{
    double temp_max = num1;
    if (temp_max < num2)
    {
        temp_max = num2;
    }
    return temp_max;
}

template<typename T>
T max_num(T num1, T num2){
    T temp_max = num1;
    if (temp_max < num2)
    {
        temp_max = num2;
    }
    return temp_max;
}
int main()
{
    cout << "Maximum of 4 and 7: " << max_2_nums(4, 7) << endl;
    cout << "Maximum of 5.4 and 7.4: " << max_2_nums(5.4, 7.4) << endl;
    cout << "======" << endl;
    cout << "Maximum of 4 and 7: " << max_num(4, 7) << endl;
    cout << "Maximum of 5.4 and 7.4: " << max_num(5.4, 7.4) << endl;
    return 0;
}