#include <iostream>

using namespace std;

int sum_n(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum_n(n - 1);
}
void hello_world(int num_time)
{
    if (num_time > 0)
    {
        cout << "Hello World " << num_time << endl;
        hello_world(num_time - 1);
    }
}
int main()
{
    int num_times;
    // Sum of n numbers using recursion
    cout << "Enter the number of time you want to print: ";
    cin >> num_times;
    hello_world(num_times);
    return 0;
}