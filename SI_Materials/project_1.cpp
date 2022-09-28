// Trung_Vong_P1.cpp
// Trung_Vong_P1B.cpp

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void project_a()
{
    double a = 0.0, b = 0.0, c = 0.0, d = 0.0;
    double numerator = 0.0, denomerator = 0.0;

    cout << "Enter value a b c d: ";
    cin >> a >> b >> c >> d; // a = -1, b= 3, c = 1, d = 2
    numerator = pow((25 * pow(a, 6) * pow(b, 4)), 0.5);
    cout << "25 * a^6 * b^4 = " << 25 * pow(a, 6) * pow(b, 4) << endl;
    cout << "sqrt(25 * a^6 * b^4)= " << pow((25 * pow(a, 6) * pow(b, 4)), 0.5) << endl;

    cout << "The numerator: " << numerator << endl;
    denomerator = pow((8 * pow(c, 3) * pow(d, 3)), 1 / 4);
    cout << "8 * pow(c, 3) * pow(d, 3) = " << 8 * pow(c, 3) * pow(d, 3) << endl;
    cout << "pow(8 * pow(c, 3) * pow(d, 3)), 1/4) = " << pow((8 * pow(c, 3) * pow(d, 3)), 0.25) << endl;
    cout << "The denomerator: " << denomerator << endl;
    cout << "The result = " << (numerator / denomerator) << endl;
}
void project_a_img()
{
    cout << setw(35) << "*" << endl;
    cout << setw(36) << "***" << endl;
    cout << setw(37) << "*****" << endl;
    cout << setw(38) << "*******" << endl;
    cout << setw(39) << "*********" << endl;
    cout << setw(40) << "***********" << endl;
    cout << setw(36) << "***" << endl;
    cout << setw(36) << "***" << endl;
    cout << setw(36) << "***" << endl;
}
void project_b()
{
    double a = 0.0, b = 0.0, c = 0.0, d = 0.0;
    double numerator = 0.0, denomerator = 0.0;

    cout << "Enter value a b c d: ";
    cin >> a >> b >> c >> d; // a = -1, b = 2, c = -2, d= 3
    // numerator = pow((27 + pow(a, 3) * pow(b, 6)), 0.25);
    numerator = pow((27 + pow(a, 4) * pow(b, 6)), 0.25);
    cout << "27 + pow(a, 4) * pow(b, 6) = " << 27 + pow(a, 4) * pow(b, 6) << endl;
    cout << " pow((27 + pow(a, 4) * pow(b, 6)), 0.25) = " << pow((27 + pow(a, 4) * pow(b, 6)), 0.25) << endl;

    cout << "The numerator: " << numerator << endl;
    denomerator = pow((9 + pow(c, 6) * pow(d, 3)), 0.5);
    cout << "9 + pow(c, 6) * pow(d, 3) = " << 9 + pow(c, 6) * pow(d, 3) << endl;
    cout << "pow((9 + pow(c, 6) * pow(d, 3)), 0.5) = " << pow((9 + pow(c, 6) * pow(d, 3)), 0.5) << endl;
    cout << "The denomerator: " << denomerator << endl;
    cout << "The result = " << (numerator / denomerator) << endl;
}
void project_b_img()
{
    cout << setw(50) << "*" << endl;
    cout << setw(48) << "*" << setw(4) << "*" << endl;
    cout << setw(46) << "*" << setw(8) << "*" << endl;
    cout << setw(44) << "*" << setw(12) << "*" << endl;
    cout << setw(42) << "*" << setw(16) << "*" << endl;
    cout << setw(58) << "*****************" << endl;
    cout << setw(42) << "*";
    cout << setw(16) << "*" << endl;
    cout << setw(42) << "*";
    cout << setw(9) << "***";
    cout << setw(7) << "*" << endl;
    cout << setw(42) << "*";
    cout << setw(9) << "***";
    cout << setw(7) << "*" << endl;
}
void project_c()
{
    double a = 0.0, b = 0.0, c = 0.0, d = 0.0;
    double numerator = 0.0, denomerator = 0.0;

    cout << "Enter value a b c d: ";
    cin >> a >> b >> c >> d; // a = 1, b = 2, c = -1, d = 3
    // numerator = pow((27 + pow(a, 3) * pow(b, 6)), 0.25);
    numerator = pow((27 * pow(a, 3) * pow(b, 6)), 0.25);
    cout << "27 * pow(a, 3) * pow(b, 6) = " << 27 * pow(a, 3) * pow(b, 6) << endl;
    cout << " pow((27 * pow(a, 3) * pow(b, 6)), 0.25) = " << pow((27 * pow(a, 4) * pow(b, 6)), 0.25) << endl;

    cout << "The numerator: " << numerator << endl;
    denomerator = pow((9 * pow(c, 8) * pow(d, 3)), 0.5);
    cout << "9 * pow(c, 8) * pow(d, 3) = " << 9 * pow(c, 8) * pow(d, 3) << endl;
    cout << "pow((9 * pow(c, 8) * pow(d, 3)), 0.5) = " << pow((9 * pow(c, 8) * pow(d, 3)), 0.5) << endl;
    cout << "The denomerator: " << denomerator << endl;
    cout << "The result = " << (numerator / denomerator) << endl;
}
void project_c_img()
{
    cout << setw(50) << "*" << endl;
    cout << setw(48) << "*" << setw(4) << "*" << endl;
    cout << setw(46) << "*" << setw(8) << "*" << endl;
    cout << setw(44) << "*" << setw(12) << "*" << endl;
    cout << setw(42) << "*" << setw(16) << "*" << endl;
    cout << setw(58) << "*****************" << endl;
    cout << setw(42) << "*";
    cout << setw(16) << "*" << endl;
    cout << setw(42) << "*";
    cout << setw(8) << "*";
    cout << setw(8) << "*" << endl;
    cout << setw(42) << "*";
    cout << setw(8) << "*";
    cout << setw(8) << "*" << endl;
}
int main()
{
    project_a();
    project_a_img();
    project_b();
    project_b_img();
    project_c();
    project_c_img();
    return 0;
}