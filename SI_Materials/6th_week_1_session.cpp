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
int square_nums(int num){
    return num * num;
}
int main()
{

    // A function that can check even and odd number
    int sum_even = 0;
    int sum_odd = 0;
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
}