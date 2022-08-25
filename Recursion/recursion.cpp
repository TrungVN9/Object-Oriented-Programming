#include <iostream>
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
int sum(int a){
    return (a == 0) ? 0: a + sum(a - 1);
}
int main()
{
    int value = 3;
    // Print in ascending order
    cout << "------- TAIL RECURSION -----------" << endl;
    // Print in decreasing order
    func1(value);
    cout << "------- HEAD RECURSION -----------" << endl;
    func2(value);
    cout << "------- TREE RECURSION -----------" << endl;
    func3_tree(value);
    cout << "------- Indirect RECURSION -----------" << endl;
    funcA(value);
    cout << "------- Nested RECURSION -----------" << endl;
    cout << nested_func(98) << endl;
    cout << "------- Sum of N Natural Number using RECURSION -----------" << endl;
    cout<< sum(value);
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