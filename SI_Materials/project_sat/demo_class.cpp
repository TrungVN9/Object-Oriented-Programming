#include<iostream>

using namespace std;

/*
    Abstraction, Inheritance, Polyphormism

    1. Abstraction
        + Class
        + `private` in access specificier
        + Header files
    2. Inheritance

*/

//Base case
//Trung -- Base case
class Animal{
    private:
        int animal_age;
    protected: 
        string animal_name;
        string animal_color;
    public:
        void eat(){
            cout <<"I can eat!!!" << endl;
        }
        void sleep(){
            cout << "I can Sleep!!!" << endl;
        }
        void set_animal_name(string type){
            animal_name = type;
        }
};
//Derived class
//Hao
class Dog : public Animal{
    public:
        void eat(){
            cout << "I eat HOT DOG!!!" << endl;
        }
        void bark(){
            cout << "I can bark!!!" << endl;
        }
        void set_my_dog_name(string type){
            animal_name = type;
        }
        string get_my_dog_name(){
            return animal_name;
        }
};

int main(){
    //className     ObjectName
    Dog my_dog;
    my_dog.eat();
    my_dog.sleep();
    my_dog.bark();

    Dog my_dog_2;
    my_dog_2.set_my_dog_name("Jimmy!!!");
    cout << "My dog name: " << my_dog_2.get_my_dog_name() << endl;
    
    return 0;
}