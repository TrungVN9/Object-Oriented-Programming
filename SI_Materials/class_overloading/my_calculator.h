class Calculator
{
private:
    int num1;
    int num2;
    int num3;
    int num4;

public:
    void set_num(int a, int b, int c, int d)
    {
        num1 = a;
        num2 = b;
        num3 = c;
        num4 = d;
    }
    void set_num1(int a)
    {
        num1 = a;
    }
    int get_num1()
    {
        return num1;
    }
    void set_num2(int b)
    {
        num2 = b;
    }
    int get_num2()
    {
        return num2;
    }
    void set_num3(int a)
    {
        num3 = a;
    }
    int get_num3()
    {
        return num3;
    }
    void set_num4(int b)
    {
        num4 = b;
    }
    int get_num4()
    {
        return num4;
    }
    bool is_even(int num)
    {
        if (num % 2 == 0)
        {
            return true;
        }
        return false;
    }
    bool is_odd(int num)
    {
        if (num % 2 == 1)
        {
            return true;
        }
        return false;
    }
    int subtraction(int a, int b)
    {
        return b - a;
    }
    int addition(int a, int b)
    {
        return b + a;
    }
    int multiplication(int a, int b)
    {
        return a * b;
    }
    int max_num(int a, int b)
    {
        int max = a;
        if (max < b)
        {
            max = b;
        }
        return max;
    }
    int min_num(int a, int b)
    {
        int min = a;
        if (min > b)
        {
            min = b;
        }
        return min;
    }
};