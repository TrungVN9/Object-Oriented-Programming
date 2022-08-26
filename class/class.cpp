#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle() { length = width = 1; }
    Rectangle(int l, int w);
    int area();
    int perimeter();
    int getLength() { return length; }

    // Mutator
    void setLength(int l)
    {
        length = l;
    }
    // Destroy the object that uses dynamic allocation
    ~Rectangle();
};
Rectangle::Rectangle(int l, int w)
{
    length = l;
    width = w;
}
int Rectangle::area()
{
    return length * width;
}
int Rectangle::perimeter()
{
    return 2 * (length + width);
}
Rectangle::~Rectangle()
{
}
int main()
{
    Rectangle rec1(10, 5);
    // rec1.initialize(10, 5);
    cout << "Area: " << rec1.area() << endl;
    rec1.setLength(30);
    cout << "------------------" << endl;
    Rectangle rect2(30, 10);
    cout << rect2.area() << endl;
    cout << rect2.perimeter() << endl;
    rect2.setLength(100);
    cout << rect2.getLength() << endl;
    cout << "-------Pointer to an Object in HEAP-----------" << endl;
    Rectangle *ptr = new Rectangle();
    ptr->setLength(10);
    cout << ptr->area();

    return 0;
}