#include <iostream>
#include <array>
#include <stdlib.h>
#include <iomanip>
using namespace std;

class StuGrade
{
public:
    static const size_t students = 25;
    StuGrade()
    {
        for (size_t i = 0; i < students; i++)
        {
            grades_proj1[i] = 0;
            grades_proj2[i] = 0;
            grades_proj3[i] = 0;
            grades_mid[i] = 0;
        }
    }
    // Assumption: Generating random number in here
    void initArr(array<int, students> arr)
    {
        for (size_t i = 0; i < students; i++)
        {
            arr[i] = rand() % 100 + 1;
            grades_proj1[i] = arr[i];
        }
    }
    void initArr(array<int, students> arr, array<int, students> arr2)
    {
        for (size_t i = 0; i < students; i++)
        {
            arr[i] = rand() % 100 + 1;
            grades_proj1[i] = arr[i];
            arr2[i] = rand() % 100 + 1;
            grades_proj2[i] = arr2[i];
        }
    }
    void initArr(array<int, students> arr, array<int, students> arr2, array<int, students> arr3)
    {
        for (size_t i = 0; i < students; i++)
        {
            arr[i] = rand() % 100 + 1;
            grades_proj1[i] = arr[i];
            arr2[i] = rand() % 100 + 1;
            grades_proj2[i] = arr2[i];
            arr3[i] = rand() % 100 + 1;
            grades_proj3[i] = arr3[i];
        }
    }
    void initArr(array<int, students> arr, array<int, students> arr2, array<int, students> arr3, array<int, students> arr4)
    {
        for (size_t i = 0; i < students; i++)
        {
            arr[i] = rand() % 100 + 1;
            grades_proj1[i] = arr[i];
            arr2[i] = rand() % 100 + 1;
            grades_proj2[i] = arr2[i];
            arr3[i] = rand() % 100 + 1;
            grades_proj3[i] = arr3[i];
            arr4[i] = rand() % 100 + 1;
            grades_mid[i] = arr4[i];
        }
    }
    int highestP(array<int, students> arr)
    {
        sort(arr.begin(), arr.end());
        return arr.back();
    }
    int lowestP(array<int, students> arr)
    {
        sort(arr.begin(), arr.end());
        return arr.front();
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
    void display()
    {
        array<string, 25> name = {"Don Duck", "Picky Mouse", "Sponge Hed",
                                  "Suber Min", "Spider Web", "Bad Man", "Robin Hud", "Sknow Why",
                                  "Unknown Char", "Believe Me", "Super Here-O", "Aha Me",
                                  "Unknown One", "Unknown Two", "ForgetMe Not", "Not ForgetMe",
                                  "Water Lily", "Unknown Tree", "Bet-U Knot", "Super Mi", "2Cold2 Study",
                                  "Smarter Mi", "Tako Pell", "2Hungry2 Study", "WhatUr Name"};

        initArr(grades_proj1, grades_proj2, grades_proj3, grades_mid);
        cout << setw(10) << "Name" << setw(20) << "Project 1" << setw(15) << "Project 2" << setw(15) << "Project 3" << setw(15) << "Mid term\n";
        for (size_t i = 0; i < 25; i++)
        {

            cout << setw(10) << name[i] << "\t\t" << grades_proj1[i] << "\t\t" << grades_proj2[i] << "\t\t" << grades_proj3[i] << "\t\t" << grades_mid[i] << endl;
        }
        cout << "=============PROJECT 1 ==============\n";
        cout << "Average: " << average(grades_proj1) << endl;
        cout << "Highest Score: " << highestP(grades_proj1) << endl;
        cout << "Lowest Score: " << lowestP(grades_proj1) << endl;
        cout << "=============PROJECT 2 ==============\n";
        cout << "Average: " << average(grades_proj2) << endl;
        cout << "Highest Score: " << highestP(grades_proj2) << endl;
        cout << "Lowest Score: " << lowestP(grades_proj2) << endl;
        cout << "=============PROJECT 3 ==============\n";
        cout << "Average: " << average(grades_proj3) << endl;
        cout << "Highest Score: " << highestP(grades_proj3) << endl;
        cout << "Lowest Score: " << lowestP(grades_proj3) << endl;
        cout << "============= MIDTERM  ==============\n";
        cout << "Average: " << average(grades_mid) << endl;
        cout << "Highest Score: " << highestP(grades_mid) << endl;
        cout << "Lowest Score: " << lowestP(grades_mid) << endl;
    }

private:
    array<int, students> grades_proj1;
    array<int, students> grades_proj2;
    array<int, students> grades_proj3;
    array<int, students> grades_mid;
};
int main()
{
    StuGrade my_student;
    my_student.display();
    // array<int, 10> rand_arr;
    // // Generate random number for the array
    // for (size_t i = 0; i < 10; i++)
    // {
    //     rand_arr[i] = rand() % 100 + 1; // 0 -> 100
    // }
    // for (size_t i = 0; i < 10; i++)
    // {
    //     cout << rand_arr[i] << " ";
    // }
    return 0;
}