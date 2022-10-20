#include<iostream>

using namespace std;

class Shape{
    protected:
        int length;
        int width;
        int height;
        int base;
    public:
        void let_set_length(int l =0){
            length = l;
        }
        void let_set_width(int w = 0){
            width = w;
        }
        void let_set_height(int h = 0){
            height = h;
        }
        void let_set_base(int b = 0){
            base = b;
        }
        int let_get_length(){
            return length;
        }
        int let_get_width(){
            return width;
        }
        int let_get_height(){
            return height;
        }
        int let_get_base(){return base; }
        void display_shape(){
            cout << "Shape: Rectangle - Square - Triangle";
        }
};
class Rectangle : public Shape{
    public:
        void display_shape(){
            cout << "my shape is Rectangle!!!";
        }
};