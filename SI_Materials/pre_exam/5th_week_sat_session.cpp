#include <iostream>

using namespace std;

void fun_project()
{
    string options;
    int choice;
    int my_balance = 1000;
    do
    {
        for (unsigned int i = 1; i <= 32; i++)
        {
            cout << " "
                 << "-";
        }
        cout << "\n| \t\t\t\t\t\t\t\t|";
        cout << "\n|";
        cout << "\tWELCOME TO MY BANK SYSTEM \t\t\t\t|";
        cout << "\n| \t\t\t\t\t\t\t\t|";
        cout << "\n";
        for (unsigned int index = 1; index <= 32; index++)
        {
            cout << " "
                 << "-";
        }
        cout << endl;
        cout << "\n\t1. CHECK MY BALANCE 💳" << endl;
        cout << "\t2. GO GROCERY 🥦🌽🍅 " << endl;
        cout << "\t3. GO SHOPPING 👔🩳 " << endl;
        cout << "\t4. PAY BILL ⚡️💧 " << endl;
        cout << "\t5. GET SALARY 💰💵" << endl;

        for (unsigned int j = 1; j <= 32; j++)
        {
            cout << " "
                 << "=";
        }
        cout << endl;
        cout << "\tEnter Your Option: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "\n\t\t\tMY BALANCE: 💵 $" << my_balance << endl;
            break;
        }

        case 2:
        {
            string grocey_continue;
            do
            {
                cout << "\n\t\t\tLET'S GO GROCERY" << endl;
                cout << "\n\t\tWHAT WOULD YOU LIKE TO PURCHASE? ";
                cout << "\n\t1. Broccoli 🥦 = $5/ lb";
                cout << "\n\t2. Tomato 🍅 = $3/lb";
                cout << "\n\t3. Eggs 🥚 = $8/ case";
                cout << "\n\t";
                int option_grocery;
                cin >> option_grocery;
                if (option_grocery == 1)
                {
                    cout << "\n\t\tHOW MANY POUNDS OF BROCCOLI YOU WANT TO BUY: ";
                    int pounds;
                    cin >> pounds;
                    cout << "\n\t\tTRANSACTION COMPLETED!!! ";
                    cout << "\n\t\t YOU SPENT: $" << pounds * 5 << " TODAY";
                    my_balance -= (pounds * 5);
                }
                if (option_grocery == 2)
                {
                    cout << "\n\t\tHOW MANY POUNDS OF TOMATO YOU WANT TO BUY: ";
                    int pounds;
                    cin >> pounds;
                    cout << "\n\t\tTRANSACTION COMPLETED!!! ";
                    cout << "\n\t\t YOU SPENT: $" << pounds * 3 << " TODAY";
                    my_balance -= (pounds * 3);
                }
                if (option_grocery == 3)
                {
                    cout << "\n\t\tHOW MANY CASE OF EGGS YOU WANT TO BUY: ";
                    int eggs;
                    cin >> eggs;
                    cout << "\n\t\tTRANSACTION COMPLETED!!! ";
                    cout << "\n\t\t YOU SPENT: $" << eggs * 8 << " TODAY";
                    my_balance -= (eggs * 8);
                }
                cout << "\n";
                for (unsigned int index = 1; index <= 32; index++)
                {
                    cout << " "
                         << "-";
                }
                cout << "\n\tTo Shopping More - Press Yes/y -- Press any keys to exit: ";
                cin >> grocey_continue;
            } while (grocey_continue == "yes" || grocey_continue == "y");
            break;
        }

        case 3:
        {
            string shopping_continue;
            do
            {
                cout << "\n\t\t\tLET'S GO SHOPPING" << endl;
                cout << "\n\t\tWHAT WOULD YOU LIKE TO PURCHASE? ";
                cout << "\n\t1. Nike Jordan Shoe 👟 = $100/ pair";
                cout << "\n\t2. Addidas Slipper 🩴 = $30/ pair";
                cout << "\n\t3. High Heels 👡 = $250/ pair";
                cout << "\n\t";
                int option_shopping;
                cin >> option_shopping;
                if (option_shopping == 1)
                {
                    cout << "\n\t\tHOW MANY PARIS OF NIKE JORDAN YOU WANT TO BUY: ";
                    int pair;
                    cin >> pair;
                    cout << "\n\t\tTRANSACTION COMPLETED!!! ";
                    cout << "\n\t\t YOU SPENT: $" << pair * 100 << " TODAY";
                    my_balance -= (pair * 100);
                }
                if (option_shopping == 2)
                {
                    cout << "\n\t\tHOW MANY PAIRS OF ADIDAS SLIPPER YOU WANT TO BUY: ";
                    int pairs_2;
                    cin >> pairs_2;
                    cout << "\n\t\tTRANSACTION COMPLETED!!! ";
                    cout << "\n\t\t YOU SPENT: $" << pairs_2 * 30 << " TODAY";
                    my_balance -= (pairs_2 * 30);
                }
                if (option_shopping == 3)
                {
                    cout << "\n\t\tHOW MANY PAIRS OF HIGH HEELS YOU WANT TO BUY: ";
                    int heels;
                    cin >> heels;
                    cout << "\n\t\tTRANSACTION COMPLETED!!! ";
                    cout << "\n\t\t YOU SPENT: $" << heels * 250 << " TODAY";
                    my_balance -= (heels * 250);
                }
                cout << "\n";
                cout << "\n\tTo Shopping More - Press Yes/y -- Press any keys to exit: ";
                cin >> shopping_continue;
            } while (shopping_continue == "yes" || shopping_continue == "y");
            break;
        }
        case 4:
        {
            string bill_continue;
            do
            {
                cout << "\n\t\t\tLET'S PAY BILL" << endl;
                cout << "\n\t\tWHAT WOULD BILL YOU WOULD LIKE TO PAY FOR? ";
                cout << "\n\t1. ELECTRIC ⚡️ = $40/ MONTH";
                cout << "\n\t2. GAS ⛽️ = $50/ MONTH";
                cout << "\n\t3. INTERNET 🚦 = $60/ MONTH";
                cout << "\n\t";
                int option_shopping;
                cin >> option_shopping;
                if (option_shopping == 1)
                {
                    cout << "\n\t\tHOW MANY MONTHS OF ELECTRIC BILL YOU WANT TO PAY FOR: ";
                    int month;
                    cin >> month;
                    cout << "\n\t\tTRANSACTION COMPLETED!!! ";
                    cout << "\n\t\t YOU SPENT: $" << month * 40 << " TODAY";
                    my_balance -= (month * 40);
                }
                if (option_shopping == 2)
                {
                    cout << "\n\t\tHOW MANY MONTHS OF GAS BILL YOU WANT TO PAY FOR: ";
                    int gas_month;
                    cin >> gas_month;
                    cout << "\n\t\tTRANSACTION COMPLETED!!! ";
                    cout << "\n\t\t YOU SPENT: $" << gas_month * 50 << " TODAY";
                    my_balance -= (gas_month * 50);
                }
                if (option_shopping == 3)
                {
                    cout << "\n\t\tHOW MANY MONTHS OF INTERNET BILL YOU WANT TO PAY FOR: ";
                    int MONTH_INTERNET;
                    cin >> MONTH_INTERNET;
                    cout << "\n\t\tTRANSACTION COMPLETED!!! ";
                    cout << "\n\t\t YOU SPENT: $" << MONTH_INTERNET * 60 << " TODAY";
                    my_balance -= (MONTH_INTERNET * 60);
                }
                cout << "\n";
                cout << "\n\tTo Pay More - Press Yes/y -- Press any keys to exit: ";
                cin >> bill_continue;
            } while (bill_continue == "yes" || bill_continue == "y");
            break;
        }
        case 5:
        {
            string month;
            cout << "\n\t\t\tLET'S GET SALARY" << endl;
            cout << "\n\t\tWHAT MONTH WOULD YOU LIKE TO GET SALARY? ";
            cout << "\n\tJan, Feb, Mar, April, May, Jun, July, Aug, Sept, Oct, Nov, Dec";
            cout << "\n\t";
            cin >> month;
            if (month == "Jan")
            {
                cout << "\n\t Jan: YOU GET $1300";
                my_balance += 1300;
            }
            if (month == "Feb")
            {
                cout << "\n\t Feb: YOU GET $1500";
                my_balance += 1500;
            }
            if (month == "Mar")
            {
                cout << "\n\t Mar: YOU GET $1100";
                my_balance += 1100;
            }
            if (month == "April")
            {
                cout << "\n\t April: YOU GET $1600";
                my_balance += 1600;
            }
            if (month == "May")
            {
                cout << "\n\t May: YOU GET $1200";
                my_balance += 1200;
            }
            if (month == "Jun")
            {
                cout << "\n\t Jun: YOU GET $1800";
                my_balance += 1800;
            }
            if (month == "July")
            {
                cout << "\n\t July: YOU GET $1600";
                my_balance += 1600;
            }
            if (month == "Aug")
            {
                cout << "\n\t Aug: YOU GET $1900";
                my_balance += 1900;
            }
            if (month == "Sept")
            {
                cout << "\n\t Sept: YOU GET $1800";
                my_balance += 1800;
            }
            if (month == "Oct")
            {
                cout << "\n\t Oct: YOU GET $1600";
                my_balance += 1600;
            }
            if (month == "Nov")
            {
                cout << "\n\t Nov: YOU GET $2100";
                my_balance += 2100;
            }
            if (month == "Dec")
            {
                cout << "\n\t Dec: YOU GET $2500";
                my_balance += 2500;
            }
            break;
        }
        break;
        default:
            cout << "\tInvalid Option" << endl;
        }
        cout << endl;
        for (unsigned int index = 1; index <= 32; index++)
        {
            cout << " "
                 << "-";
        }
        cout << "\n\tTo Continue Program - Press Yes/y -- Press any keys to exit: ";
        cin >> options;
    } while (options == "yes" || options == "y");
    cout << "\n\n\tThank You For Choosing Our Program";
}
int main()
{
    /*
        Design a program that allows users manage his/ her bank account. 
        Users bank account orginally has $1,000, and they often spend money on Grocery, Shopping, utility bills. 
        Since users also work, they can get their monthly income. 
        At the end of the day, they often checks their bank account. 
    */
    fun_project();
    return 0;
}