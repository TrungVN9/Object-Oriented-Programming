#include<iostream>
using namespace std;

int main(){
    char s_2[50];
    cout << "Enter your name: ";
    cin.get(s_2, 50);
    // cin.getline(s_2, 50);
    cout << "Hi " << s_2 <<endl;
    cout << "-----------------" <<endl;
    cin.ignore();
    cout <<"Enter another name: ";
    char s[50];
    cin.get(s, 50);
    cout << "Hi " << s <<endl;

    return 0;

}