#include<iostream>

using namespace std;

class Geometry{
    private:
        char shape;
        double radius, length, width, height;
    public:
    // a default constructor with all private values are zero        
        Geometry(){
        //Set all variables from private to 0
            shape = 'a';
            radius = 0.0;
            length = 0.0;
            width = 0.0;
            height = 0.0; 
        } 
        // constructor with 2 parameters: shape and radius 
        Geometry(char s, double r){
            shape = s;
            radius = r;
        } 
        // constructor with 3 parameters: shape, length, width
        Geometry(char s, double l, double w){
            shape = s;
            length = l;
            width = w;
        } 
        // constructor with 4 parameters: shape, length, width, height
        Geometry(char s, double l, double w, double h){
            shape = s;
            length = l;
            width = w;
            height = h;
        } 
        //Set all private variables
        void set_shape(char s){
            //Set private variable to the parameter
            shape = s; // 'R'
        }
        void set_radius(double r){
            //Set private variable to the parameter
            radius = r;
        }
        void set_length(double l){
            length = l;
        }
        void set_width(double w){
            width = w;
        }
        void set_height(double h){
            height = h;
        }
        //Get all private variables 
        char get_shape(){
            return shape;
        }
        double get_radius(){
            return radius;
        }
        
        double get_length(){
            return length;
        }
        
        double get_width(){
            return width;
        }
        double get_height(){
            return height;
        }
        //A function with 2 parameters 
        double getAreaS(double a, double b){
            return a * b;
        }
        //A function with 3 parameters 
        double getAreaS(double a, double b, double c){
            return (2*a*b) + (2*b*c) + (2 *a * c);
        }
};

int main(){
    //Object 1 is for the square
    Geometry obj1('a', 2, 2, 0);
    cout << "=================== OBJECT 1 =============================" << endl;
    cout << "This program calculates the perimeter/ surface area, area and volume of a geometric object" << endl;
    cout << "Initializing the square: " << endl;
    cout << "Length: " << obj1.get_length() << endl;
    cout << "Width: "  << obj1.get_width() << endl;
    cout << "Height: " << obj1.get_height() << endl;
    cout << "The perimeter of the square is: " << 4 * obj1.get_length() << endl;
    cout << "The area of the square: " << obj1.getAreaS(obj1.get_length(), obj1.get_width()) << endl;

    cout << "=================== OBJECT 2 =============================" << endl;
    Geometry obj2;
    char temp_s;
    double temp_l, temp_w, temp_h;
    cout << "Enter the shape, length, wdith, and height of an object (enter 0 for none): ";
    cin >> temp_s >> temp_l >> temp_w >> temp_h;
    cout << "Shape: " << temp_s;
    obj2.set_shape(temp_s);
    cout << "\nShape in object 2: " << obj2.get_shape() << endl;
    obj2.set_length(temp_l);
    double length = obj2.get_length();
    cout << "The Length: " << length << endl;
    obj2.set_width(temp_w);
    double width = obj2.get_width();
    cout << "The Width: " << width << endl;
    obj2.set_height(temp_h);
    double height =  obj2.get_height(); 
    cout << "The Height: " << height << endl;
    cout << "The surface area of the rectangular box is: " << obj2.getAreaS(length, width, height) << endl;
    cout << "The volume of the rectangular box is " << obj2.get_height() * obj2.get_length() * obj2.get_width() << endl;

    cout << "=================== OBJECT 3 =============================" << endl;
    Geometry obj3;
    cout << "Now, let's find the area aand surface area of a circle and a sphere: " << endl;
    double temp_r;
    double PI = 3.14159265358;
    cout << "Enter the radius: ";
    cin >> temp_r;
    obj3.set_radius(temp_r);
    cout << "Radius of Object 3: " << obj3.get_radius() << endl;
    cout << "\tThe circumference of the circle is " << 2 * PI * obj3.get_radius() << endl;
    cout << "\tThe area of the circle is " << PI * obj3.get_radius() * obj3.get_radius() << endl;

    return 0;
}