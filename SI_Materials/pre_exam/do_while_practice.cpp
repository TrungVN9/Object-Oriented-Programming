#include<iostream>

using namespace std;

int main(){

  int option = 0;
  string option_continue = "yes";
  
  do{
    cout << "Hello World!" << endl;
    cout << "Enter Your Option: ";
    cin >> option;

    cout << "Enter Your String Option: ";
    cin >> option_continue;
  }while(option != -1 || option_continue == "yes" || option_continue == "y");
  return 0;
}
