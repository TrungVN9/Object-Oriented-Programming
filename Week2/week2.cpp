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

// Compute fib memo with push back with recursive function
int fib_memo_2(int num)
{
    static vector<int> memo(0, 1);
    if (memo.size() >= (num + 1))
    {
        return memo[num];
    }
    int f_n = fib_memo_2(num - 2) + fib_memo_2(num - 1);
    memo.push_back(f_n);
    return f_n;
}

// Compute fib with 3 arguments
int fib_helper(int num, int a, int b)
{
    if (num == 0)
    {
        return a;
    }
    return fib_helper(num - 1, b, a + b);
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

// 20 12 | 8 12 | 8 4 | 4 4
// Example: 20 % 12 = 8
// 12 % 8 = 4
// 8 % 4 = 0
// Always modulus with the largest number and return the smallest num.

// Num1 > num2
int gcd_modulus(int num1, int num2)
{
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    if (num2 == 0)
    {
        return num1;
    }
    return gcd_modulus(num2, num1 % num2);
}

// No needed
int gcd_modulus_2(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    if (num1 == 0)
    {
        return num2;
    }
    if (num1 == num2)
    {
        return num1;
    }
    if (num1 < num2)
    {
        return gcd_modulus_2(num2, num2 % num1);
    }
    return gcd_modulus_2(num2, num1 % num2);
}
// Templates class
template <class T>
T maxNum(T num1, T num2)
{
    return num1 > num2 ? num1 : num2;
};
int main()
{
    // for (int index = 0; index < 10; index++)
    // {
    //     // cout << fib_memo_2(index) << endl;
    //     // cout << "-------" << endl;
    //     cout << fib_helper(index, 0, 1) << endl;
    // }
    // print_hello(10);
    // int max = maxNum(10, 20);
    // cout << "Max Number is: " << max << endl;
    cout << "Method 1: " << gcd_modulus(20, 12) << endl;
    // cout << "Method 2: " << gcd_modulus_2(50, 50) << endl;
    return 0;
}
