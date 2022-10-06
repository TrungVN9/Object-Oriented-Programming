#include <iostream>
#include "my_header.h"

using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;
    int total_sum = 0;
    total_sum = sum_two_nums(num1, num2);
    cout << "sum of two int nums: " << total_sum << endl;
    cout << "sum of two double nums: " << sum_two_nums(17.5, 20.1) << endl;

    return 0;
}