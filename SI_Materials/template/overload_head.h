
// 1. Maximum 2 numbers
// 2. Addition 2 numbers.
// 3. Subtraction 2 numbers.
int max_2_nums(int num1, int num2)
{
    int temp_max = num1;
    if (temp_max < num2)
    {
        temp_max = num2;
    }
    return temp_max;
}
double max_2_nums(double num1, double num2)
{
    double temp_max = num1;
    if (temp_max < num2)
    {
        temp_max = num2;
    }
    return temp_max;
}

template <typename T>
T max_num(T num1, T num2)
{
    T temp_max = num1;
    if (temp_max < num2)
    {
        temp_max = num2;
    }
    return temp_max;
}