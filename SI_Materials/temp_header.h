template <class T>
T multiply_two_nums(T num1, T num2)
{
    return num1 * num2;
}

template <class N>
N max_num(N num1, N num2)
{
    N temp_max = num1;
    if (num2 > temp_max)
    {
        temp_max = num2;
    }
    return temp_max;
}
template <class M>
M min_num(M num1, M num2)
{
    M temp_min = num1;
    if (num1 < temp_min)
    {
        temp_min = num1;
    }
    return temp_min;
}