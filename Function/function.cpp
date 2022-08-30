#include <iostream>

using namespace std;

/* Function Template
+ Is used when trying to write a function with the same name
+ But various data types
*/
template <class T>
T Max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int c = Max(5, 1);
    cout << c << endl;
    float d = Max(1.0f, 2.0f);
    cout << d << endl;
    return 0;
}