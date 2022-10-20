#include <iostream>

using namespace std;

int main()
{
    //Array is a collection of elements with the same data type
    int my_array[5] = {10, 20, 30, 40, 50};
    string my_arr_str[5] = {"Ci", "Trung", "Hao", "Kse", "David"};
    for(int i = 0; i < 5; i++){
        cout << "Print array element " << i << ": " << my_array[i] << endl;
    }
    cout << "The address of the array: " << &my_array << endl;
    int *ptr;
    cout << "The address of the pointer: " << ptr << endl;
    ptr = my_array;
    cout << "The address of the pointer updated: " << ptr << endl;
    for(int i = 0; i< 5; i++){
        cout << "Print array element " << i << ": " << ptr[i] << endl;
    }
    // delete ptr;
    return 0;
}

/*
   
*/