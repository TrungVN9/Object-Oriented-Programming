#include <iostream>

#include "shape_header.h"

using namespace std;

int main()
{
    Shape my_rectangle('r', 2, 3);

    double length = my_rectangle.i_get_length();
    double width = my_rectangle.i_get_width();
    char my_shape = my_rectangle.i_get_type();
    cout << "My shape is " << my_shape << endl;
    cout << "Rectangle Length: " << length << endl;
    cout << "Rectangle Width: " << width << endl;
    cout << "Area Rectangle: " << my_rectangle.get_area(length, width) << endl;

    Shape my_circle('c', 5);
    double my_radius = my_circle.i_get_radius();
    cout << "My Circle has radius: " << my_radius << endl;
    cout << "Area Circle: " << my_rectangle.get_area(my_radius) << endl;

    return 0;
}