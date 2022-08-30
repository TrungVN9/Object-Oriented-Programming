#include <iostream>

using namespace std;

const int SIZE1 = 3;
const int SIZE2 = 4;
int main()
{

    int arr[SIZE1][SIZE2];
    for (int i = 0; i < SIZE1; i++)
    {
        for (int j = 0; j < SIZE2; j++)
        {
            arr[i][j] = j;
        }
    }
    cout << "PRINT 2D ARRAY" << endl;
    for (int i = 0; i < SIZE1; i++)
    {
        for (int j = 0; j < SIZE2; j++)
        {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }
    cout << "ARRAY USING POINTER" << endl;
    // Array of pointers
    int *A[SIZE1];
    // Declaring 2D array using pointer
    for (int i = 0; i < SIZE1; i++)
    {
        A[i] = new int[SIZE2];
    }
    // Initialize 2D array
    for (int i = 0; i < SIZE1; i++)
    {
        for (int j = 0; j < SIZE2; j++)
        {
            A[i][j] = j;
        }
    }
    cout << "PRINT 2D ARRAY" << endl;
    for (int i = 0; i < SIZE1; i++)
    {
        for (int j = 0; j < SIZE2; j++)
        {
            cout << "\t" << A[i][j];
        }
        cout << endl;
    }

    return 0;
}