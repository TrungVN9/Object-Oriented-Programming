const double PI = 3.145;
class Shape
{
private:
    double length;
    double width;
    double height;
    double base;
    double radius;
    char type;

public:
    Shape()
    {
        length = 0.0;
        width = 0.0;
        height = 0.0;
        base = 0.0;
        radius = 0.0;
        type = 's';
    }
    Shape(char type_name, double my_radius)
    {
        type = type_name;
        radius = my_radius;
    }
    Shape(char type_name, double my_length, double my_width)
    {
        type = type_name;
        length = my_length;
        width = my_width;
    }
    void i_set_length(double my_length)
    {
        length = my_length;
    }
    double i_get_length() { return length; }
    void i_set_width(double my_width)
    {
        width = my_width;
    }
    double i_get_width() { return width; }
    void i_set_radius(double my_radius)
    {
        radius = my_radius;
    }
    double i_get_radius() { return radius; }
    void i_set_height(double my_height)
    {
        height = my_height;
    }
    double i_get_height() { return height; }
    void i_set_type(char my_type)
    {
        type = my_type;
    }
    char i_get_type() { return type; }
    void i_set_base(double my_base)
    {
        base = my_base;
    }
    double i_get_base() { return base; }
    double get_area()
    {
        return length * width;
    }
    double get_area(double a, double b)
    {
        return a * b;
    }
    double get_area(double my_radius)
    {
        return PI * my_radius * my_radius;
    }
    void display()
    {
        switch (type)
        {
        case 'r':
            std::cout << "Area of Rectangle: " << get_area() << std::endl;
            break;
        case 's':
            std::cout << "Area of Square: " << get_area(length, width) << std::endl;
        case 't':
            std::cout << "Area of Triangle: " << 0.5 * get_area(base, height) << std::endl;
        case 'c':
            std::cout << "Area of Circle: " << get_area(radius) << std::endl;
        default:
            break;
        }
    }
};