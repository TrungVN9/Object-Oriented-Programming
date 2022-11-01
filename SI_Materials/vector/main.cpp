#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<double, 3> hours;
    array<double, 3> charges;
    double total = 0.0;
    double total_hours = 0.0;
    for (size_t index = 0; index < 3; index++)
    {
        cout << "Enter the hours: ";
        cin >> hours[index];
        if (hours[index] <= 3)
        {
            charges[index] = 20;
        }
        else if (hours[index] > 3 && hours[index] < 24)
        {
            charges[index] = ((hours[index] - 3) * 5) + 20;
        }
        else
        {
            charges[index] = 50;
        }
    }
    for (size_t index = 0; index < 3; index++)
    {
        cout << "Customer " << index << ": has " << hours[index] << " hours with amount of charged " << charges[index] << endl;
        total += charges[index];
        total_hours += hours[index];
    }
    cout << "Total hours: " << total_hours << endl;
    cout << "How much you earned: $" << total << endl;
    return 0;
}