class Calculator{
    private:
        /*
            Declare your variable here
        */
       float num1;
       float num2;
    public:
        //Constructor
        Calculator(float a = 0.0, float b= 0.0){
            num1 = a;
            num2 = b;
        }
        float multiplication();
        float division();
        float subtraction();
        float addition();
        float max_num();
        float min_num();
        // bool is_divisible_3();
        // bool is_divisible_5();
        // bool is_divisible_7();
        // bool is_disibile_11();
};
float Calculator::multiplication(){
    return num1 * num2;
}
float Calculator::division(){
    return num2 / num1;
}
float Calculator::subtraction(){
    return num2 - num1;
}
float Calculator::addition(){
    return num2 + num1;
}
