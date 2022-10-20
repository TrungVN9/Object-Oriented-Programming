#include<iostream>

using namespace std;

class Geometry{
    private:
        char shape;
        double radius, length, width, height;
    public:
    // a default constructor with all private values are zero        
        Geometry(){
        //i_want_to_set all variables from private to 0
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
        void i_want_to_set_shape(char my_shape){
            //i_want_to_set private variable to the parameter
            shape = my_shape; // 'R'
        }
        void i_want_to_set_radius(double r){
            //i_want_to_set private variable to the parameter
            radius = r;
        }
        void i_want_to_set_length(double l){
            length = l;
        }
        void i_want_to_set_width(double w){
            width = w;
        }
        void i_want_to_set_height(double h){
            height = h;
        }
        //Get all private variables 
        char i_want_to_get_shape(){
            return shape;
        }
        double i_want_to_get_radius(){
            return radius;
        }
        
        double i_want_to_get_length(){
            return length;
        }
        
        double i_want_to_get_width(){
            return width;
        }
        double i_want_to_get_height(){
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
        // void display_2d_option(){
        //     char my_shape;
        //     cout << "Enter the shape: ";
        //     cin >> my_shape;
        //     if (my_shape == 't'){
        //         double height;
        //         double base;
        //         cout << "Enter the base, height: ";
        //         cin >> base >> height;
        //         length = base;
        //         cout << "The area of Triangle: " << 
        //     }
        // }
        void display(){
            cout << "This program calculates the perimeter/ surface area, area and volume of a geometric object" << endl;
            cout << "Enter the shape: ";
            cin >> shape;
            if (shape == 's'){
                cout << "Enter the side for the square: " << endl;
                cin >> length;
                cout << "Side: " << length << endl;
                cout << "The perimeter of the square is: " << 4 *length << endl;
                cout << "The area of the square: " << getAreaS(length, length) << endl;
            }
            if (shape == 'r'){
                cout << "Enter the length for the rectangle: " << endl;
                cin >> length;
                cout << "Enter the width for the rectangle: " << endl;
                cin >> width;
                cout << "Length: " << length << endl;
                cout << "Width: " << width << endl;
                cout << "The perimeter of the rectangle is: " << 2* (length + width) << endl;
                cout << "The area of the square: " << getAreaS(length, width) << endl;
            }
            // int option;
            // cout << "What Would You Like To Calculate 2-dimension or 3-dimension: ";
            // cin >> option;
            // switch (option)
            // {
            // case 2:
            //     /* */
            //     break;
            // case 3:
            //     break;
            // default: cout << "Invalid Option!!!" << endl;
            //     break;
            // }
        }
};
