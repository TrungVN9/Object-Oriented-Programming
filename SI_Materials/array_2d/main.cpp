#include <iostream>

using namespace std;

int main()
{
    int a = 10; // variable composite with name (address) and value is stored
    cout << "Address: " << &a << endl;
    cout << "Value: " << a << endl;
    int *ptr;
    cout << "Address ptr: " << ptr << endl;
    ptr = &a;
    cout << "Address ptr after assigning: " << ptr << endl;
    cout << "Value of ptr: " << *ptr << endl;
    *ptr = 100;
    cout << "Value: " << a << endl;
    cout << "Value of ptr: " << *ptr << endl;

    return 0;
}
/*                   j = 0, 1, 2
    array[i][j] = i = 0 [0, 0, 0]
                  i = 1 [0, 0, 0]
                  i = 2 [0, 0, 0]
                  i = 3 [0, 0, 0]

**
*/