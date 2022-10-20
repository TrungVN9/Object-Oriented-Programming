#include<iomanip>
using namespace std;
class Fractions{
    //Data members
    private:
        double num_1;
        double de_1;
        double num_2;
        double de_2;
        double num_3;
        double de_3;
        double num_4;
        double de_4;
        //Function members
    public:
        //3 constructors
        Fractions(){
            num_1 = 0.0;
            de_1 = 0.0;
            num_2 = 0.0;
            de_2 = 0.0;
            num_3 = 0.0;
            de_3 = 0.0;
            num_4 = 0.0;
            de_4 = 0.0;
        }
        Fractions(double my_num_1, double my_de_1, double my_num_2, double my_de_2)  //4 paras        
        {
            num_1 = my_num_1;
            de_1 = my_de_1;
            num_2 = my_num_2;
            de_2 = my_de_2;
        }
        Fractions(double my_num_1, double my_de_1, double my_num_2, double my_de_2, double my_num_3, double my_de_3, double my_num_4, double my_de_4)  //4 paras        
        {
            num_1 = my_num_1;
            de_1 = my_de_1;
            num_2 = my_num_2;
            de_2 = my_de_2;
            num_3 = my_num_3;
            de_3 = my_de_3;
            num_4 = my_num_4;
            de_4 = my_de_4;
        }
        void set_num_1(double num1){
            num_1 = num1;
        }
        void set_de_1(double de1){
            de_1 = de1;
        }
        void set_num_2(double num2){
            num_2 = num2;
        }
        void set_de_2(double de2){
            de_2 = de2;
        }
        void set_num_3(double num3){
            num_3 = num3;
        }
        void set_de_3(double de3){
            de_3 = de3;
        }
        void set_num_4(double num4){
            num_4 = num4;
        }
        void set_de_4(double de4){
            de_4 = de4;
        }
        double get_num_1(){return num_1;}
        double get_de_1(){return de_1;}
        double get_num_2(){return num_2;}
        double get_de_2(){return de_2;}
        double get_num_3(){return num_3;}
        double get_de_3(){return de_3 ;}
        double get_num_4(){return num_4;}
        double get_de_4(){return de_4;}
        double addFrac(double a, double b, double c, double d){
            return ((a * d) + (b * c)) / (b * d);
        }
        double addFrac(double a, double b, double c, double d, double a_1, double b_1, double c_1, double d_1){
            double frac1 = addFrac(a,b,c,d);
            double frac2 = addFrac(a_1, b_1, c_1, d_1);
            // double frac1 = ((a * d) + (b * c)) / (b * d);
            // double frac2 = ((a_1 * d_1) + (b_1 * c_1)) / (b_1 * d_1);
            return frac1 / frac2;
        }
        double subFrac(double a, double b, double c, double d){
            return ((a * d) - (b * c)) / (b * d);
        }
        double subFrac(double a, double b, double c, double d, double a_1, double b_1, double c_1, double d_1){
            double frac1 = subFrac(a,b,c,d);
            double frac2 = subFrac(a_1, b_1, c_1, d_1);
            // double frac1 = ((a * d) + (b * c)) / (b * d);
            // double frac2 = ((a_1 * d_1) + (b_1 * c_1)) / (b_1 * d_1);
            return frac1 / frac2;
        }
        //Credit to Hao and David:
         void display1() {

            cout << "Preforming addition/subtraction of fractions OR complex fractions. \n\n";
            cout << "Addition/Subtraction of simple fractions: \n\n";
            cout << setw(10) << num_1 << "\t\t " << num_2 << endl;
            cout << "       ----\t+      ----\t=\t" << addFrac(num_1, de_1, num_2, de_2) << endl;
            cout << setw(10) << de_1 << "\t\t " << de_2 << "\n\n";
            cout << "=============== SUBTRACTION ================= \n";
            cout << setw(10) << num_1 << "\t\t " << num_2 << endl;
            cout << "       ----\t-      ----\t=\t" << subFrac(num_1, de_1, num_2, de_2) << endl;
            cout << setw(10) << de_1 << "\t\t " << de_2 << "\n\n";
        }
        void display2() {
            cout << "Preforming addition/subtraction of fractions OR complex fractions. \n\n";
            cout << "Addition/Subtraction of complex fractions: \n\n";
            cout << setw(10) << num_1 << "\t\t " << num_2 << endl;
            cout << "       ----\t+      ----\t\t" << endl;
            cout << setw(10) << de_1 << "\t\t " << de_2 << endl;

            cout << "------------------------------------------   =   "
            << addFrac(num_1, de_1, num_2, de_2, num_3, de_3, num_4, de_4) << endl;

            cout << setw(10) << num_3 << "\t\t " << num_4 << endl;
            cout << "       ----\t+      ----\t\t" << endl;
            cout << setw(10) << de_3 << "\t\t " << de_4 << endl;
            cout << "=============== SUBTRACTION ================= \n";
            cout << setw(10) << num_1 << "\t\t " << num_2 << endl;
            cout << "       ----\t-      ----\t\t" << endl;
            cout << setw(10) << de_1 << "\t\t " << de_2 << endl;

            cout << "------------------------------------------   =   "
            << subFrac(num_1, de_1, num_2, de_2, num_3, de_3, num_4, de_4) << endl;

            cout << setw(10) << num_3 << "\t\t " << num_4 << endl;
            cout << "       ----\t-      ----\t\t" << endl;
            cout << setw(10) << de_3 << "\t\t " << de_4 << endl;

        }

};