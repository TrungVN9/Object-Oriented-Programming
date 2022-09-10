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

int func_e(int x, int n){
    static int p = 1, f = 1;
    int r; 
    if (n==0){return 1;}
    r = func_e(x, n-1); 
    p = p * x;
    f = f* n;
    return r + p/f;
}

int taylor_series(int x, int num){
    //e^x = 1 + (x/1) + (x^2/2!) + (x^3/3!) + (x^4/4!) + ... + n
    //using common factor: 1 + (x/1)*(1 + x/2*(1+x/3))
    int s = 1;
    for (num; num > 0; num--){
        s = 1 + (x/n)*s;
    }
    return s;
}
//Tower of Hanoi
void tower_Hanoi(int num_disk, int A, int B, int C){
    if (num_disk > 0){
        tower_Hanoi(num_disk - 1, A, C, B);
        cout << "from " << A << " to " << C <<endl;
        tower_Hanoi(num_disk - 1, B, A, C);
    }
}
int taylor_series_rec(int x, int num){
    static int s = 1;
    if (num == 0){
        return s;
    }
    s = 1 + (x/num) * s;
    return taylor_series_rec(x, n-1);
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