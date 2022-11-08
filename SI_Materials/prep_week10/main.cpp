#include <iostream>
#include <array>

using namespace std;

/*
    Problem:
    - Create an array with the size of 5
    - Ask users to input element to the array
    - Sum of all inputs and return sum

    Answer:
        + What is the scope of this problem?
            -> Look at the input and output requirements
            (Input: users input number or information.)
            (Input: available numbers)
            Input --> Function --> Output
    1. We need an array -> store

    Practice:
        Create an array to store all even number from 1 -> 10;
            + 1 -> 10 => if index % 2 == 0: even_array[index] = index
        Calculate the subtraction of those numbers.

*/
int main()
{
    // Declare an array
    // array<int, 5> even_arr = {0};
    // int num;
    // int index_even = 0;
    // for (size_t i = 0; i < 5; i++)
    // {
    //     //  |  |  | _ | _ |
    //     cout << "Enter the number: ";
    //     cin >> num; // 6
    //     if (num % 2 == 0)
    //     {
    //         even_arr[index_even] = num;
    //         index_even += 1;
    //     }
    // }
    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout << even_arr[i] << " ";
    // }
    // Hao Problem: 2D array 3x5 => first and the third row => even number from the range[1, 10]
    //   => second row => odd number from the range (1, 10)
    // addition of the first and the second row | the second and third row
    // Subtraction of the third and the second row

    array<array<int, 5>, 3> array_2d; // Declaration
    for (size_t row = 0; row < 3; row++)
    {
        if (row % 2 == 0) // Check if the row is 1st, 3rd, 5th, 7 ..
        {
            int even = 2;
            for (size_t col = 0; col < 5; col++)
            {
                array_2d[row][col] = even;
                even += 2;
            }
        }
        else
        {
            int odd = 1;
            for (size_t col = 0; col < 5; col++)
            {
                array_2d[row][col] = odd;
                odd += 2;
            }
        }
    }

    for (size_t row = 0; row < 3; row++)
    {
        for (size_t col = 0; col < 5; col++)
        {
            cout << "Row " << (row + 1) << ": " << array_2d[row][col] << endl;
        }
    }

    return 0;
}
