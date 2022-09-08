#include <iostream>

using namespace std;

class Rectangle
{
private:
    int width, length;

public:
    Rectangle(int l, int w);
    void set_values(int width, int length);
    int area();
    int perimeter();
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

/* Class -- polymorphism*/
class Car
{
public:
    virtual void display_car()
    {
        cout << "Display from car" << endl;
    }
};
class Toyota : public Car
{
public:
    void display_car()
    {
        cout << "Display car from Toyota" << endl;
    }
};
class Honda : public Car
{
public:
    void display_car()
    {
        cout << "Display from Honda" << endl;
    }
};
int main()
{
    Car myCar;
    Toyota myToyota;
    Honda myHonda;
    myCar.display_car();
    myToyota.display_car();
    myHonda.display_car();
    /*
    cout << "-----------------------" << endl;
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
*/

    return 0;
}