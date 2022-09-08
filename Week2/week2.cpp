#include <iostream>
#include <vector>

using namespace std;

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    if (num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

int sum_n_term(int num)
{
    // // Iterative
    // int sum = 0;
    // for (int index; index <= num; index++)
    // {
    //     sum += index;
    // }
    // return sum;
    // Recursive
    if (num < 1)
    {
        return 0;
    }
    return num + sum_n_term(num - 1);
}

int sum_n_odd(int num)
{
    // Sum of 1st n odds = sum of 1st (n-1) odds + n th.
    // n-th odd number = 2n - 1
    // Base case
    if (num == 1)
    {
        return 1;
    }
    return sum_n_odd(num - 1) + (2 * num) - 1;
}

// Math 273 Famous Sequences
int sequence(int num)
{
    if (num == 0)
    {
        return 2;
    }
    if (num == 1)
    {
        return 5;
    }
    return sequence(num - 1) + 2 * sequence(num - 2);
}

// Compute Fib memo
int fib_memo(int num)
{
    // Get a vector of n+1 0's of initialization
    static vector<int> memo(num + 1);
    for (int index = 0; index <= num; index++)
    {
        memo[index] = 0;
    }
    memo[0] = memo[1] = 1;
    // If num is in memo return memo[num]
    if (memo[num] != 0)
    {
        return memo[num];
    }
    return fib_memo(num - 1) + fib_memo(num - 2);
}

// Print hello with n times
void print_hello(int num)
{
    if (num == 0)
    {
        exit(0);
    }
    cout << "Hello! " << num << "th time" << endl;
    print_hello(num - 1);
}

// Templates class
template <class T>
T maxNum(T num1, T num2)
{
    return num1 > num2 ? num1 : num2;
};
int main()
{
    // for (int index = 0; index < 5; index++)
    // {
    //     // cout << factorial(index) << endl;
    //     // cout << "-------" << endl;
    //     cout << fib_memo(index) << endl;
    // }
    // print_hello(10);
    // int max = maxNum(10, 20);
    // cout << "Max Number is: " << max << endl;

    return 0;
}
