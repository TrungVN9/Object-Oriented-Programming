#include<iostream>

using namespace std;


//Base Case
class Animal{
    protected:
        string animal_name;
        string animal_color;
    public:
        Animal(){
            animal_name = "";
            animal_color = "";
        }
        Animal(string str_1, string str_2){
            animal_name = str_1;
            animal_color = str_2;
        }
        void i_can_breath(){ //No parameters
            cout << "I can breath!!! \n";
        }
        void i_can_walk(){
            cout << "I can walk!!! \n";
        }
        void i_can_sound(){
            cout <<"I can sound!!! \n";
        }
};

//Derived class
class Cat : public Animal{
    public:
        Cat(){
            cout <<"This is the Cat Animal" << endl;
        }
        Cat(string str_1, string str_2){
           cout <<"my animal name: " << str_1  << endl;
           cout <<"my animal color: " << str_2 << endl;
        }
        void i_want_to_set_my_animal_name(string name){
            animal_name = name;
        }
};
int main(){
    Cat my_cat;
    my_cat.i_can_breath();
    my_cat.i_can_sound();
    my_cat.i_can_walk();

    Cat my_cat_2("Jimmy", "Black");
    return 0;
}

class Shape{
    protected:
        int length;
        int base;
        int height;
        int width;
        int adj;
        int opp;
        int hypo;
};
class Triangle : public Shape{
    public:
        void i_want_to_set_adj(int give_me_adj){
            adj = give_me_adj;
        }
        double i_want_the_area(){
            return base * height * 0.5;
        }
};
class Rectangle : public Shape{
    public:
        void i_want_to_set_length(int give_me_length){
            length = give_me_length;
        }
        int i_want_to_get_length(){
            return length;
        }
        double i_want_to_get_area(){
            return length * width;
        }
};
class Square : public Shape{

};

/*
//Animal in General == Base Case
class Animal{
    protected:
        string animal_name;
        string animal_color;
    public:
        void i_can_eat(){
            cout << "I can eat!!!" << endl;
        }
        void i_can_sleep(){
            cout << "I can sleep!!!" << endl;
        }
        // void i_want_to_set_animal_name(string type){
        //     animal_name = type;
        // } 
};
//Derived class Cat
class Cat : public Animal{
    public:
        void i_want_to_set_animal_name(string type){
            animal_name = type;
        }
        string i_want_to_get_animal_name(){
            return animal_name;
        }
        void i_want_to_set_animal_color(string clr){
            animal_color = clr;
        }
        string i_want_to_get_animal_color(){
            return animal_color;
        }
};
 //  Cat my_cat;
    //  my_cat.i_can_eat();
    //  my_cat.i_can_sleep();
    //  my_cat.i_want_to_set_animal_name("Jimmy!!!");
    //  cout << "My Cat name: " << my_cat.i_want_to_get_animal_name()<< endl;
*/