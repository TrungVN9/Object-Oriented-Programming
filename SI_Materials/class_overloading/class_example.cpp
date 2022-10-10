// Write a class Rectangle
// Rectangle: area of the rectangle and perimeter of the rectangle

#include<iostream>

using namespace std;

//Define the class Rectangle
class Rectangle{
    //Access Specifier
    private: 
        //Declare variable for the rectangle
        //Data members
        int length;
        //Data members
        int width;
        
    //Access Specifier
    public:
        //Constructor
        Rectangle(int l = 0, int w= 0){
            length = l;
            width = w;
        }
        //Member functions
        int area(){
            return length * width;
        }
        //Member functions
        int perimeter();

};
int main(){

    //className ObjectName;
    Rectangle rect1(5, 7);
    //You create an object rect1 with the length = 5 and the width = 7
    cout << "The area of Rectangle 1: " << rect1.area() << endl;

    Rectangle rect2(9, 4);
    cout << "The area of Rectangle 2: " << rect2.area() << endl;

    //Calculate the perimeter of the rectangle

    return 0;
}
