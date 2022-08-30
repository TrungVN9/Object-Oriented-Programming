#include <iostream>

using namespace std;
int main()
{
    int x = 10;
    int *ptr1;

    ptr1 = &x;
    cout << "Value x: " << x << endl;                       // Value x: 10
    cout << "Address x: " << &x << endl;                    // Address x: 0x7ffeee41e908
    cout << "pointer ptr having address: " << ptr1 << endl; // pointer ptr having address: 0x7ffeee41e908
    cout << "Actual address ptr is: " << &ptr1 << endl;     // Actual address ptr is: 0x7ffeee41e900
    cout << "Dereferencing (Accesssing data) that ptr pointing to: " << *ptr1 << endl;
    // Dereferencing (Accesssing data) that ptr pointing to: 10
    cout << "------------STATIC AND DYNAMIC ARRAY -------------------" << endl;

    int arr[5] = {1, 2, 3, 4, 5}; // Declare in a stack where we allocate 5 spots for the array

    int *ptr;
    int SIZE = 10;
    ptr = new int[SIZE]; // Declare in heap

    // Static array -> Out of bound giving an random number
    for (int index = 0; index < 7; index++)
    {
        cout << "Index: " << index;
        cout << "\t Value : " << arr[index] << endl;
    }
    cout << "Array Size: " << sizeof arr << endl;

    // Assign ptr values:
    cout << "-------------" << endl;
    for (int index = 0; index < SIZE; index++)
    {
        ptr[index] = index;
    }
    cout << "Array PTr Size: " << sizeof ptr << endl;
    cout << "-------------" << endl;
    for (int index = 0; index < SIZE; index++)
    {
        cout << "Ptr Index: " << index;
        cout << "\t Ptr Value : " << ptr[index] << endl;
    }
    cout << "-------------" << endl;
    SIZE = 12;

    // Dynamic Array --> Give number zero
    for (int index = 0; index < SIZE; index++)
    {
        cout << "Ptr Index: " << index;
        cout << "\t Ptr Value : " << ptr[index] << endl;
    }

    delete[] ptr; // Prevent memory leak
    ptr = nullptr;

    cout << "------------COMPUTING POINTERS-------------------" << endl;
    int arr2[5] = {2, 4, 6, 8, 10};
    int *ptr2;
    ptr2 = arr2;

    // Print array of ptr
    for (int index = 0; index < 5; index++)
    {
        cout << *ptr2 << endl;
        ptr2++;
    }
    int *q_ptr = &arr2[4];
    cout << q_ptr - ptr2 << endl;

    cout << "-----------REFERENCE--------------------" << endl;
    int x2 = 10;
    int &y = x2;
    // x address: 0x7ffee9088908
    cout << "x address: " << &x2 << endl;
    // y value: 10
    cout << "y value: " << y << endl;
    cout << "----------" << endl;
    x++;
    // x value: 11
    // y value: 11
    cout << "x value: " << x2 << endl;
    cout << "y value: " << y << endl;
    cout << "----------" << endl;
    y++;
    // x value: 12
    // y value: 12
    cout << "x value: " << x2 << endl;
    cout << "y value: " << y << endl;
    return 0;
}
