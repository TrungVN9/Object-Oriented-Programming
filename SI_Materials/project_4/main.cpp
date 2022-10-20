#include<iostream>
#include "fraction_header.h"
using namespace std;


int main()
{
    Fractions my_frac(12, 15, 3, 15);
    my_frac.display1();
    Fractions my_frac_2(12, 15, 3, 15, 2, 15, 3, 15);
    my_frac_2.display2();
}