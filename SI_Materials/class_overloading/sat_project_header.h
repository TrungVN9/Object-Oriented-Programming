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
        void set_num1_num2(int a, int b){
            num1 = a;
            num2 = b;
        }
        float get_num1(){
            return num1;
        }
        float get_num2(){
            return num2;
        }
        float multiplication();
        float division();
        float subtraction();
        float addition();
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
