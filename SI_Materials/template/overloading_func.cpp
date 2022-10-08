#include <iostream>
#include "overload_head.h"
using namespace std;

int main()
{
    cout << "Maximum of 4 and 7: " << max_2_nums(4, 7) << endl;
    cout << "Maximum of 5.4 and 7.4: " << max_2_nums(5.4, 7.4) << endl;
    cout << "======" << endl;
    cout << "Maximum of 4 and 7: " << max_num(4, 7) << endl;
    cout << "Maximum of 5.4 and 7.4: " << max_num(5.4, 7.4) << endl;
    return 0;
}