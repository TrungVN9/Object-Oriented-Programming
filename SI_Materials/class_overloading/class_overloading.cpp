#include<iostream>
using namespace std;

//Adding two complex numbers
class Complex{
    private:
        int real;
        int img;
    public:
    
        Complex(int r = 0, int i = 0){
            real = r;
            img = i;
        }
        Complex Add(Complex num){
            Complex temp;
            temp.real = real + num.real;
            temp.img = img + num.img;
            return temp;
        }
};
int main(){
    Complex num1(3, 7);
    Complex num2(5,4);
    Complex num3;
    num3 = num2.Add(num1);
}