#include <iostream>
#include <vector>

using namespace std;

void display(int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << endl; // it is equivalent to *(arr + i)
    }
}
void display_ptr(int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr + i << endl;
        cout << *(arr + i) << endl;
    }
}
void display_value(int *a)
{
    cout << "my a: " << *a;
}
int main()
{
    int arr[3] = {1, 2, 3};
    cout << "adr of arr: " << arr << endl; //&arr[0]
    cout << "adr of arr[0]: " << &arr[0] << endl;
    cout << "adr of arr[1]: " << &arr[1] << endl;
    cout << "adr of arr[2]: " << &arr[2] << endl;

    int *ptr = nullptr;
    ptr = arr;
    cout << "adr of ptr[0]: " << &ptr[0] << endl;
    cout << "adr of ptr[1]: " << &ptr[1] << endl;
    cout << "adr of ptr[2]: " << &ptr[2] << endl;
    cout << "value of ptr[0]: " << ptr[0] << endl;
    cout << "value of ptr[1]: " << ptr[1] << endl;
    cout << "value of ptr[2]: " << ptr[2] << endl;

    int arr_func[5] = {11, 22, 33, 44, 55};
    display(arr_func, 5);
    int a = 10;
    display_value(&a);
    cout << "\n===================\n";
    display_ptr(arr_func, 5);
    // 2D vector
    //  vector<vector<int> > matrix;
    //  vector<int> row;
    //  row.push_back(10);
    //  row.push_back(20);
    //  row.push_back(30);
    //  row.push_back(40);

    // matrix.push_back(row);
    // vector<int> row2;
    // row2.push_back(1);
    // row2.push_back(2);
    // row2.push_back(3);
    // row2.push_back(4);
    // matrix.push_back(row2);
    // cout << "\n";
    // for (size_t i = 0; i < matrix.size(); i++)
    // {
    //     for (size_t j = 0; j < row2.size(); j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    return 0;
}