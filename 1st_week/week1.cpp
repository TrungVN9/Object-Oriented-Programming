#include <iostream>
#include <string>

using namespace std;

/*
Find the greatest common divisors between a and b
    (by finding the difference between two values a, b and keep subtracting it until both of them are equal)
    Step 1: if a = b, then gcd is a.
    Step 2: Replace the larger of a, b with their positive difference.
    Step 3: Goto Step 1
*/

int gcd(int a, int b)
{
    if (a == b)
    {
        return a;
    }
    if (a > b)
    {
        return gcd(a - b, b);
    }
    else
    {
        return gcd(a, b - a);
    }
}
int gcd_2(int a, int b)
{
    if (a == b)
    {
        return a;
    }
    if (a > b)
    {
        a = a - b;
    }
    else
    {
        b = b - a;
    }
    return gcd_2(a, b);
}

// De-reference the number to get double
void double_variables(int *num_1)
{
    *num_1 = 2 * (*num_1);
}
// Reference --> Alias
void double_var(int &num_1)
{
    num_1 *= 2;
}

class Duck
{
public:
    // Constructor
    Duck()
    {
        cout << "Duck.h" << endl;
    }
    // Deconstructor
    ~Duck()
    {
        cout << "GoodBye Duck.h" << endl;
    }
};

int fib_seq(int num)
{
    if (num == 1)
    {
        return 1;
    }
    if (num == 0)
    {
        return 0;
    }
    return fib_seq(num - 1) + fib_seq(num - 2);
}
string reverse_num(int num)
{
    if (num < 10)
    {
        return "";
    }
    return to_string(num % 10) + reverse_num(num / 10);
}
int reverse_sum_num(int num)
{
    if (num < 10)
    {
        return num;
    }
    return (num % 10) + reverse_sum_num(num / 10);
}
int fact(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * fact(num - 1);
}

char *space_remove(char *str1)
{
    // A temp variable to keep track of the string position
    int temp_count = 0;
    // string new_string("abcabc");
    for (int index = 0; str1[index] != '\0'; index++)
    {
        if (str1[index] != ' ')
        {
            str1[temp_count] = str1[index];
            temp_count++;
        }
        str1[temp_count] = '\0';
    }
    return str1;
    // Increase that position if there is no space.
    // If there is a space,
}
int main()
{
    int input_1 = 286;
    int input_2 = 1001;
    // cout << "GCD between " << input_1 << " & " << input_2 << " :" << gcd(input_1, input_2) << endl;
    // cout << "GCD between " << input_1 << " & " << input_2 << " :" << gcd_2(input_1, input_2) << endl;
    double_variables(&input_1); // Need to get the address because pointer points to the address of its.
    // cout << input_1 << endl;

    int num1 = 3;
    int &num2 = num1;
    num2 = 100;
    // cout << num1 << endl;

    double_var(num1);
    // cout << num1 << endl;
    Duck myDuck;

    int nums[3] = {1, 2, 3};
    int *ptr_nums;
    ptr_nums = nums;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "value: " << ptr_nums[i] << endl;
    // }
    // ptr_nums = new int[5];
    // for (int i = 3; i < 10; i++)
    // {
    //     ptr_nums[i] = i;
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "value: " << ptr_nums[i] << endl;
    // }
    // delete[] ptr_nums;
    // cout << fib_seq(5) << endl;

    // Homework
    // Print the digits of an integer inverse using recursive function
    // Ex: 23417 => 71432
    cout << "Reversed num as a string: " << reverse_num(12345) << endl;
    cout << "Reversed sum num: " << reverse_sum_num(12345) << endl;
    char s1[] = "abc abc";
    cout << space_remove(s1) << endl;
    return 0;
}