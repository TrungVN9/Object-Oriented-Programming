#include<iostream>

using namespace std;


class Rectangle{

    //Data members
    private:
        int length;
        int width;
    public:
        //Constructor
        // Rectangle(int l = 0, int w = 0){
        //     length = l;
        //     width = w;
        // }
        void set_length_width(int l, int w){
            length = l;
            width = w;
        }
        //Function members
        int area(){
            return length * width;
        }
};
int main(){

    Rectangle my_rectangle;
    // cout << "Enter your length: ";
    // cin >> my_rectangle.length;
    // cout << "Enter your width: ";
    // cin >> my_rectangle.width;
    // cout << "My length: " << my_rectangle.length << " and my width: " << my_rectangle.width << endl;
    my_rectangle.set_length_width(5, 2);
    cout << "My Area: " << my_rectangle.area() << endl;
    
    return 0;
}
