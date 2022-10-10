#include<iostream>

using namespace std;

class Rectangle{
    private:
        int length;
        int width;
    public:
        Rectangle(int l = 0, int w = 0){
            length = l;
            width = w;
        }
        int area(){
            return length * width;
        }
        int perimeter(){
            return 2*(length + width);
        }     
};
int main(){
    Rectangle rect1(10, 20);
    cout << "Area of Rectangle: " << rect1.area() << endl;
    cout << "Perimeter of Rectangle: " << rect1.perimeter() << endl;
    return 0;
}