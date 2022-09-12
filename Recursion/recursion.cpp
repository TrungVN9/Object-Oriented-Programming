#include <iostream>
#include <vector>

using namespace std;
/* Recursion

Tracing the code in a tree form.
    func1(3)
   3        func1(2)
        2           func1(1)
            1                   func1(0)
                                    going backward
*/

// Tail recursion => Better convert to loop to get optimized space
void func1(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        // Last recursion is being called
        func1(n - 1);
    }
}
void func1_loop(int n)
{
    while (n > 0)
    {
        cout << n << endl;
        n--;
    }
}

// Head recursion
void func2(int n)
{
    if (n > 0)
    {
        func2(n - 1);
        cout << n << endl;
    }
}
void func2_loop(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << n << endl;
    }
}
// Tree recursion
void func3_tree(int n)
{
    // A recursive function is being called more than 1 time.
    if (n > 0)
    {
        cout << n << endl;
        func3_tree(n - 1);
        func3_tree(n - 1);
    }
}
// Indirect recursion
void funcB(int n);
void funcA(int n);
int nested_func(int n)
{
    return n > 100 ? (n - 10) : (nested_func(nested_func(n + 11)));
}

int func_e(int x, int n)
{
    static int p = 1, f = 1;
    int r;
    if (n == 0)
    {
        return 1;
    }
    r = func_e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

int taylor_series(int x, int num)
{
    // e^x = 1 + (x/1) + (x^2/2!) + (x^3/3!) + (x^4/4!) + ... + n
    // using common factor: 1 + (x/1)*(1 + x/2*(1+x/3))
    int s = 1;
    for (num = num; num > 0; num--)
    {
        s = 1 + (x / num) * s;
    }
    return s;
}
// Tower of Hanoi
void tower_Hanoi(int num_disk, int A, int B, int C)
{
    if (num_disk > 0)
    {
        tower_Hanoi(num_disk - 1, A, C, B);
        cout << "from " << A << " to " << C << endl;
        tower_Hanoi(num_disk - 1, B, A, C);
    }
}
int taylor_series_rec(int x, int num)
{
    static int s = 1;
    if (num == 0)
    {
        return s;
    }
    s = 1 + (x / num) * s;
    return taylor_series_rec(x, num - 1);
}

// Sum --> Return first `n` positive integers
int sum(int num)
{
    return (num == 0) ? 0 : num + sum(num - 1);
}

int sum_squares(int num)
{
    return (num == 0) ? 0 : (num * num) + sum_squares(num - 1);
}

int sum_cubes(int num)
{
    return (num == 0) ? 0 : (num * num * num) + sum_cubes(num - 1);
}

void print_threes(int num)
{
    if (num > 0)
    {
        cout << num << " " << num << " " << num << endl;
        print_threes(num - 1);
    }
}
void print_quacks(int num)
{
    if (num > 0)
    {
        cout << "Quack!" << endl;
        print_quacks(num - 1);
    }
}
void print_sequence(int num1, int num2)
{
    if (num1 < num2)
    {
        cout << num1 << " ";
        print_sequence(num1 + 1, num2);
    }
    if (num1 > num2)
    {
        cout << num1 << " ";
        print_sequence(num1 - 1, num2);
    }
    if (num1 == num2)
    {
        cout << num1;
    }
}

// Print the number threes in range num1 num2
int num_threes_in_range(int num1, int num2)
{
    int count = 0;
    if (num1 == num2)
    {
        if (num1 % 10 == 3 || num1 / 10 == 3)
        {
            return count + 1;
        }
        if (num1 % 10 == 3 and num1 / 10 == 3)
        {
            return count + 1;
        }
        return 0;
    }
    if (num1 % 10 == 3 || num1 / 10 == 3)
    {
        count += 1;
    }
    if (num1 % 10 == 3 and num1 / 10 == 3)
    {
        count += 1;
    }
    return count + num_threes_in_range(num1 + 1, num2);
}

int fib_pos_neg(int num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }
    return fib_pos_neg(num - 1) + fib_pos_neg(num - 2);
}

// Recursive helper for adding 3 nums
int add_3_nums(int num)
{
    // Create a stack_memo with the size 0 and value = 0 initializing
    static vector<int> stack_memo(0, 0);

    if (num == 0)
    {
        return 1;
    }
    if (num == 1)
    {
        return 2;
    }
    if (num == 2)
    {
        return 3;
    }
    if (stack_memo.size() >= num + 1)
    {
        // cout << "Stack Memo at " << num << " with stack Memo value: " << stack_memo[num] << endl;
        return stack_memo[num];
    }
    int sum_3_nums = add_3_nums(num - 1) + add_3_nums(num - 2) + add_3_nums(num - 3);
    stack_memo.push_back(sum_3_nums);
    return sum_3_nums;
}

int main()
{
    // int value = 3;
    // // Print in ascending order
    // cout << "------- TAIL RECURSION -----------" << endl;
    // // Print in decreasing order
    // func1(value);
    // cout << "------- HEAD RECURSION -----------" << endl;
    // func2(value);
    // cout << "------- TREE RECURSION -----------" << endl;
    // func3_tree(value);
    // cout << "------- Indirect RECURSION -----------" << endl;
    // funcA(value);
    // cout << "------- Nested RECURSION -----------" << endl;
    // cout << nested_func(98) << endl;
    // cout << "------- Sum of N Natural Number using RECURSION -----------" << endl;
    // cout<< sum(value);

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << sum_cubes(i) << endl;
    // }
    // print_quacks(5);
    // print_sequence(1, 5);
    // cout << num_threes_in_range(30, 40) << endl;

    // Testing vector
    //  int SIZE = 10;
    //  vector<int> stack_memo(SIZE, 10);
    //  for (int i = 0; i < SIZE; i++)
    //  {
    //      cout << stack_memo[i] << endl;
    //  }

    // Adding 3 sums
    // for (int index = 0; index < 5; index++)
    // {
    //     cout << add_3_nums(index) << endl;
    // }

    return 0;
}
void funcB(int n)
{
    if (n > 1)
    {
        cout << n << endl;
        funcA(n / 2);
    }
}
void funcA(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        funcB(n - 1);
    }
}