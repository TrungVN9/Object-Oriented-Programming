#include <iostream>
#include <cmath>

using namespace std;
//𝑥^4−9𝑥^3−4𝑥^2+36𝑥 -- Range from -10 to 10
void golden_right_triangle()
{
  int count = 0;
  for (int a = 3; a <= 40; a++)
  {
    for (int b = 4; b <= 40; b++)
    {
      for (int c = 5; c <= 40; c++)
      {
        if (pow(a, 2) + pow(b, 2) == pow(c, 2))
        {
          cout << "\t(" << a << ", ";
          cout << b << ", ";
          cout << c << ") ";
          count += 1;
          if (count % 6 == 0)
          {
            cout << endl;
          }
        }
      }
    }
  }
}
void part_a_midterm()
{
  int y = 0;
  int count = 0;
  for (int x = -10; x <= 10; x++)
  {
    y = pow(x, 4) - 9 * pow(x, 3) - 4 * pow(x, 2) + 36 * x;
    if (y == 0)
    {
      cout << "the solution x: " << x << endl;
      count += 1;
    }
  }
  cout << "The number of solutions would be: " << count << endl;
}
void part_b_midterm()
{
  int count = 0;

  for (int x_2 = -100; x_2 <= 100; x_2++)
  {
    double y_2 = (pow(x_2, 3) + 3 * pow(x_2, 2) - 6 * x_2 - 8) / 4;
    // y = 0; x = -4, -1, 2
    if (y_2 == 0)
    {
      cout << "the solution x: " << x_2 << endl;
      count += 1;
    }
  }
  cout << "The number of solutions would be: " << count << endl;
}
void fun_project()
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
    cout << "\tWELCOME TO PRACTICE SWITCH STATEMENT\t\t\t|";
    cout << "\n| \t\t\t\t\t\t\t\t|";
    cout << "\n";
    for (unsigned int index = 1; index <= 32; index++)
    {
      cout << " "
           << "-";
    }
    cout << endl;
    cout << "\n\t1. GOLDEN RIGHT TRIANGLE" << endl;
    cout << "\t2. FIND SOLUTIONS OF THE FUNCTION: X^4 - 9X^3 - 4X^2 + 36X" << endl;
    cout << "\t3. FIND SOLUTIONS OF THE FUNCTION: X^3+3X^2-6X-8)/4" << endl;
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
      golden_right_triangle();
      break;
    case 2:
      part_a_midterm();
      break;
    case 3:
      part_b_midterm();
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
  /*
  Design a program that allows a user to choose different options:
  1. Golden right triangle.
  2. Part a of the mid term
  3. Part b of the mid term
  */
  fun_project();
  return 0;
}
