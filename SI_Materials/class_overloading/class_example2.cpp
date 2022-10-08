#include<iostream>

using namespace std;


// class Rectangle
class Rectangle{
    public:
        int length;
        int width;
        int area(){
            return length * width;
        }
};
int main(){
    Rectangle rec1;
    cout << "Enter the length: ";
    cin >> rec1.length;
    cout << "Enter the width: ";
    cin >> rec1.width;
    cout << "The length: "<< rec1.length << " and the width: " << rec1.width << endl;
    cout << "The Area is: " << rec1.area() << endl;
    return 0;
}