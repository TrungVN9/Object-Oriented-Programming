#include <iostream>
#include <string>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};
struct Students
{
    int grade;
    string name;
    string dept;
};

int main()
{
    // Declarasion and Initialization
    Rectangle r = {10, 5};
    cout << r.length << endl;
    cout << r.width << endl;
    cout << "Area of Rectangle: " << r.length * r.width << endl;
    cout << "-------Access Struct using Pointers--------------" << endl;
    Rectangle *r_ptr;
    r_ptr = &r;
    (*r_ptr).length = 100;
    (*r_ptr).width = 300;
    cout << (*r_ptr).length << endl;
    cout << (*r_ptr).width << endl;
    cout << "Area of Rectangle 2: " << (*r_ptr).length * (*r_ptr).width << endl;

    cout << "---------------------" << endl;
    Students student1;
    student1.grade = 100;
    student1.name = "John";
    student1.dept = "Math";
    cout << student1.name << endl;
    cout << student1.grade << endl;
    cout << student1.dept << endl;

    return 0;
}