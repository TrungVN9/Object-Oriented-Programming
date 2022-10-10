#include <iostream>

using namespace std;

int recursive_check(int num);
void recursive_check_2(int num)
{
  if (num > 0)
  {
    cout << "Hello World!!!\n";
  }
  recursive_check_2(num - 1);
}
void if_else_practice()
{
  // int num;
  cout << "\t===*** Practice if-else statement ***===\n";
  cout << "1. Design a program that allows students to input their grade and output the result as a letter grade.\n";
  /* Code Problem 1 Here!!! */

  cout << "2. Design a program to check whether an input number is even or odd.\n";
  /* Code Problem 2 Here!!! */

  // Example code:
  // cout << "\tEnter your number: ";
  // cin >> num;
  // if (recursive_check(num) == 1)
  // {
  //   cout <<"\t "<< num << " is odd\n";
  // }
  // else
  // {
  //   cout <<"\t" << num << " is even\n";
  // }
}
int recursive(int num);
void while_loop_practice()
{
  int temp_value = 0;
  int sum, num;
  // Declare variable num as int num
  // Declare variable sum as int sum

  cout << "\t===*** Practice while_loop statement ***===\n";
  cout << "\t1. Print Hello World!!! n times\n";

  cout << "\t2. Compute the summation of n numbers\n";
  /* Code Here!!! */

  //===============================
  // if (recursive(num) == sum)
  // {
  //   cout << "\tCorrect!!!\n";
  // }
  // else
  // {
  //   cout << "\tIncorrect!!!\n";
  // }
}
void do_while_practice()
{
  int temp_value;
  int sum, num;
  cout << "\t===*** Practice do_while statement ***===\n";
  cout << "1. Compute the summation of n numbers\n";
  /* Code Here!!! */

  //===============================
  // if (recursive(num) == sum)
  // {
  //   cout << "\tCorrect!!!\n";
  // }
  // else
  // {
  //   cout << "\tIncorrect!!!\n";
  // }
}
void for_loop_practice()
{
  int temp_value;
  int sum, num;
  cout << "\t===*** Practice for_loop statement ***===\n";
  cout << "1. Compute the summation of n numbers\n";
  /* Code Here!!! */

  //===============================
  // if (recursive(num) == sum)
  // {
  //   cout << "\tCorrect!!!\n";
  // }
  // else
  // {
  //   cout << "\tIncorrect!!!\n";
  // }
  cout << "\t===*** ************ ***===\n";
  cout << "2. Compute the summation of 3(n^3+1)\n";
}
void challenge_problem()
{
  /* Problem Statement:
  Drivers are concerned with the mileage obtained by their automobiles.
  One driver has kept track of several trips by recording miles driven and gallons used for each trip.
  Develop a C++ program that uses a while statement to input the miles driven and gallons used for each trip.
  The program should calculate and display the miles per gallon obtained for each trip and print the combined miles per gallon obtained for all tank fuels up to this point
  */
  cout << "\t===*** Practice Challange Problem ***===\n";
  /* Code Here!!! */

  //===============================
}
void display_project_week4()
{
  string options;
  int choice;
  do
  {
    cout << "\t===*** Week 4 Exercise ***===" << endl;
    cout << "\t1. Practice If-else statement\n";
    cout << "\t2. Practice While Loop\n";
    cout << "\t3. Practice Do-While Loop\n";
    cout << "\t4. Practice For-loop\n";
    cout << "\t5. Practice Challenge Problem\n";
    cout << endl;
    cout << "\tEnter Your Option: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      if_else_practice();
      break;
    case 2:
      while_loop_practice();
      break;
    case 3:
      do_while_practice();
      break;
    case 4:
      for_loop_practice();
      break;
    case 5:
      challenge_problem();
      break;
    default:
      cout << "Oops! Invalid Option!!!\n";
    }
    cout << "\n\tPress any key to exit or y/yes to continue: ";
    cin >> options;
  } while (options == "yes" || options == "y");
  cout << "\t===*** Thank You For Choosing Our Program ***===\n";
}

int main()
{
  display_project_week4();
  return 0;
}
int recursive_check(int num)
{
  if (num % 2 == 1)
  {
    return 1;
  }
  return 0;
}
int recursive(int num)
{
  if (num == 0)
  {
    return 0;
  }
  return num + recursive(num - 1);
}