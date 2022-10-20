#include<iostream>

using namespace std;

class Animal{
    protected:
        string animal_name;
        string animal_color;
    public:
        // void i_set_animal_name(string name){
        //     animal_name = name;
        // }
        // string i_get_animal_name(){return animal_name;}
        void i_can_walk(){
            cout << "Animal can walk!!! \n";
        }
        void i_can_eat(){
            cout << "Animal can eat!!! \n";
        }
};
class Cat : public Animal{
    public:
        void i_can_eat(){
            cout << "Cat can eat!!! \n";
        }
        void i_can_walk(){
            cout << "Cat can walk!!! \n";
        }
};
int main(){
    Cat my_cat;
    my_cat.i_can_eat();
    my_cat.i_can_walk();
    return 0;
}