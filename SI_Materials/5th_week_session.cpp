#include <iostream>
#include <iomanip>

using namespace std;

void for_loop()
{
  cout << "\n\t\t1. PRACTICE FOR LOOP COUNTING" << endl;
  cout << "Problem 1: Counting down from 100 to 1 and display all even numbers as a block and all odd numbers as second block" << endl;
  cout << "\t1.1: Display the sum of all even numbers";
  cout << "\n\t1.2: Display the sum of all odd numbers";
  cout << "\n";
  for (unsigned int k = 1; k <= 32; k++)
  {
    cout << " "
         << "=";
  }
  // Code Here
}
void while_loop()
{
  cout << "\n\t\t2. PRACTICE WHILE LOOP COUNTING" << endl;
  cout << "Problem 2: Counting up from the range (1, 50) and display all numbers that are divisible by 3 as a block and all numbers that are divisible by 5 as second block" << endl;
  cout << "\t2.1: Display the sum of all those numbers divisible by 3";
  cout << "\n\t2.2: Display the sum of all those numbers divisible by 5";
  cout << "\n";
  for (unsigned int k = 1; k <= 32; k++)
  {
    cout << " "
         << "=";
  }
  // Code Here
}

void do_while()
{
  cout << "\n\t\t3. PRACTICE DO LOOP COUNTING" << endl;
  cout << "Problem 3: Enter the range n starting from 1 to n (n is an input) " << endl;
  cout << "\t3.1: Display the sum of the  multiplication of all those numbers divisible by 7";
  cout << "\tIf the result sum is larger than 50 --> Display the result sum and start calculating the sum over again!";

  cout << "\n\t3.2: Display the sum of all numbers divisible by 11";
  cout << "\tIf the result sum is greater than 30 --> Display the result sum and start calculating the sum over again!";
  cout << "\n";
  for (unsigned int k = 1; k <= 32; k++)
  {
    cout << " "
         << "=";
  }
  // Code Here
}
void display_project()
{
  string options;
  int choice;

  do
  {
    for (unsigned int i = 1; i <= 32; i++)
    {
      cout << " "
           << "-";
    }
    cout << "\n| \t\t\t\t\t\t\t\t|";
    cout << "\n|";
    cout << "\tWELCOME TO PRACTICE CONTROL STATEMENT -- LOOPING\t|";
    cout << "\n| \t\t\t\t\t\t\t\t|";
    cout << "\n";
    for (unsigned int index = 1; index <= 32; index++)
    {
      cout << " "
           << "-";
    }
    cout << endl;
    cout << "\n\t1. Practice For-Loop Counting" << endl;
    cout << "\t2. Practice While-Loop Counting" << endl;
    cout << "\t3. Practice Do-While Counting" << endl;
    for (unsigned int j = 1; j <= 32; j++)
    {
      cout << " "
           << "=";
    }
    cout << endl;
    cout << "\tEnter Your Option: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      for_loop();
      break;
    case 2:
      while_loop();
      break;
    default:
      cout << "\tInvalid Option" << endl;
    }
    cout << "\n\tTo Continue - Press Yes/y -- Press any keys to exit: ";
    cin >> options;
  } while (options == "yes" || options == "y");
  cout << "\n\n\tThank You For Choosing Our Program";
}
int main()
{
  display_project();
  return 0;
}
