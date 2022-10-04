#include <iostream>

using namespace std;

bool is_even(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    return false;
}
int square_nums(int num)
{
    return num * num;
}
bool is_divisible_by_5(int num)
{
    if (num % 5 == 0)
        return true;
    return false;
}
bool is_divisible_by_7(int num)
{
    if (num % 7 == 0)
        return true;
    return false;
}
bool is_divisible_by_11(int num)
{
    if (num % 11 == 0)
        return true;
    return false;
}
bool max_num(int num1, int num2)
{
    if (num1 > num2)
        return true;
    return false;
}
int main()
{

    // A function that can check even and odd number
    int sum_even = 0;
    int sum_odd = 0;
    int mul = 1;
    int sum_seven = 0;
    int sum_eleven = 0;
    for (int num = 1; num <= 10; num++)
    {
        if (is_even(num))
        {
            cout << num << " is even!!! " << endl;
            cout << num << " square is : " << square_nums(num) << endl;
            sum_even += num;
        }
        else
        {
            cout << num << " is odd!!! " << endl;
            sum_odd += num;
        }
    }
    cout << "Sum even number: " << sum_even << endl;
    cout << "Sum odd number: " << sum_odd << endl;
    cout << "==========================================" << endl;
    for (int num1 = 20; num1 <= 40; num1++)
    {
        if (is_divisible_by_5(num1))
        {
            mul *= num1;
            cout << num1 << " is divisble by 5!!! " << endl;
        }
        else if (is_divisible_by_7(num1))
        {
            sum_seven += num1;
            cout << num1 << " is divisble by 7!!! " << endl;
        }
        else if (is_divisible_by_11(num1))
        {
            sum_eleven += num1;
            cout << num1 << " is divisble by 11!!! " << endl;
        }
    }
    cout << "Multiplication of numbers divisble by 5: " << mul << endl;
    cout << "Sum of numbers divisble by 7: " << sum_seven << endl;
    cout << "Sum of numbers divisble by 11: " << sum_eleven << endl;
    cout << "Maximum or Minimum number between (" << sum_seven << ", " << sum_eleven << ") " << endl;

    if (max_num(sum_seven, sum_eleven))
    {
        cout << "Max is: " << sum_eleven << endl;
    }
    else
    {
        cout << "Min is: " << sum_seven << endl;
    }
    cout << "==========================================" << endl;
    return 0;
}