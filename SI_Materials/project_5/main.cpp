#include <iostream>
#include <array>
#include <algorithm>
#include <stdlib.h> /* srand, rand */

using namespace std;

class StuGrade
{
public:
    static const size_t students = 25;
    StuGrade()
    {
        for (size_t i = 0; i < students; i++)
        {
            grades[i] = 0;
        }
    }
    void initArr(array<int, students> arr)
    {
        for (size_t i = 0; i < students; i++)
        {
            arr[i] = rand() % 100;
            grades[i] = arr[i];
        }
    }
    void initArr(array<int, students> arr, array<int, students> arr2)
    {
        for (size_t i = 0; i < students; i++)
        {
            arr[i] = rand() % 100;
            // grades[i] = arr[i];

            arr2[i] = rand() % 100;
            // grades[i] = arr2[i];
        }
    }
    void initArr(array<int, students> arr, array<int, students> arr2, array<int, students> arr3)
    {
        for (size_t i = 0; i < students; i++)
        {
            arr[i] = rand() % 100;
            // grades[i] = arr[i];

            arr2[i] = rand() % 100;
            // grades[i] = arr2[i];
            arr3[i] = rand() % 100;
            // grades[i] = arr2[i];
        }
    }
    void initArr(array<int, students> arr, array<int, students> arr2, array<int, students> arr3, array<int, students> arr4)
    {
        for (size_t i = 0; i < students; i++)
        {
            arr[i] = rand() % 100;
            arr2[i] = rand() % 100;
            arr3[i] = rand() % 100;
            arr4[i] = rand() % 100;
        }
    }
    double average(array<int, students> arr)
    {
        int sum = 0;
        for (size_t i = 0; i < students; i++)
        {
            sum += arr[i];
        }
        return (sum / students);
    }
    int highestP(array<int, students> arr)
    {
        sort(arr.begin(), arr.end());
        return arr.back();
    }
    int lowest(array<int, students> arr)
    {
        sort(arr.begin(), arr.end());
        return arr.front();
    }
    void display()
    {
        // Credit Kseniia
        array<string, 25> name = {"Don Duck", "Picky Mouse", "Sponge Hed",
                                  "Suber Min", "Spider Web", "Bad Man", "Robin Hud", "Sknow Why",
                                  "Unknown Char", "Believe Me", "Super Here-O", "Aha Me",
                                  "Unknown One", "Unknown Two", "ForgetMe Not", "Not ForgetMe",
                                  "Water Lily", "Unknown Tree", "Bet-U Knot", "Super Mi", "2Cold2 Study",
                                  "Smarter Mi", "Tako Pell", "2Hungry2 Study", "WhatUr Name"};
        initArr(grades);
        for (size_t i = 0; i < 25; i++)
        {
            cout << name[i] << " grade is: " << grades[i] << "\n";
        }
        cout << "Average: " << average(grades) << endl;
        cout << "Highest Score: " << highestP(grades) << endl;
        cout << "Lowest Score: " << lowest(grades) << endl;
    }

private:
    array<int, students> grades;
};
int main()
{
    StuGrade my_array;
    my_array.display();

    return 0;
}