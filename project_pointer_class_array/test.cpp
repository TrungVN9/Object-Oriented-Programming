#include <iostream>
using namespace std;

double net_worth(double assets, double debt = 0, double inheritance = 0)
{
    return assets - debt + inheritance;
}
int main()
{
    cout << net_worth(1000);
    return 0;
}