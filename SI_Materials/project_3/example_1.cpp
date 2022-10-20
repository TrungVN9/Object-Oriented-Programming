#include<iostream>

using namespace std;

class Bank{
    private:
        int num1;
        int num2;   
    public:
    //Return type | Function Name ()
        void i_want_to_set_my_num(int give_me_my_num){
            num1 = give_me_my_num; 
        }
        int i_want_to_get_my_num(){
            return num1;
        }
};
int main(){
    Bank my_bank;
    my_bank.i_want_to_set_my_num(10);
    cout << "I want to get my number 1: " << my_bank.i_want_to_get_my_num() << endl;
    my_bank.i_want_to_set_my_num(20);
    cout << "I want to get my number 2: " << my_bank.i_want_to_get_my_num() << endl;
    return 0;
}