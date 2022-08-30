#include <iostream>

using namespace std;

/* Find the greatest common divisors between a and b
    (by finding the difference between two values a, b and keep subtracting it until both of them are equal)
    Step 1: if a = b, then gcd is a.
    Step 2: Replace the larger of a, b with their positive difference.
    Step 3: Goto Step 1

Example:
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
int main()
{
    int input_1 = 286;
    int input_2 = 1001;
    cout << "GCD between " << input_1 << " & " << input_2 << " :" << gcd(input_1, input_2) << endl;
    return 0;
}