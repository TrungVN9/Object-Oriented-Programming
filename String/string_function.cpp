#include <iostream>
#include <string>

using namespace std;

int main()
{
    // cout << "----Reading and Writing String---" << endl;
    // char s_2[50];
    // cout << "Enter your name: ";
    // cin.get(s_2, 50);
    // // cin.getline(s_2, 50);
    // cout << "Hi " << s_2 << endl;
    // cout << "-----------------" << endl;
    // cin.ignore();
    // cout << "Enter another name: ";
    // char s[50];
    // cin.get(s, 50);
    // cout << "Hi " << s << endl;
    // cout << "------------------" << endl;

    // cout << "-------- String Function --------- " << endl;
    // char str_1[20] = "Programming";
    // char str_2[10] = "gra";
    // // strsstr(main_string, sub_str);
    // cout << "Substring: " << strstr(str_1, str_2) << endl;
    // // strrchr(main_string, sub_char);
    // cout << "Sub character: " << strrchr(str_1, 'P') << endl;
    // // Compare 2 strings
    // // strcmp(str1, str2)
    // char str_3[10] = "hello";
    // char str_4[10] = "HELLO";
    // cout << "Compare str_3, str_4: " << strcmp(str_3, str_4) << endl;
    // cout << "-----------------------------" << endl;

    cout << "------- Class String ---------" << endl;

    string str_name;
    cout << "Input Name using String: ";
    getline(cin, str_name);
    cout << "Hello, " << str_name << endl;
    // Append another string
    str_name.append(" is an awesome guys");
    cout << str_name << endl;
    // Insert another string (position, string)
    str_name.insert(5, "INSERTED");
    cout << str_name << endl;
    return 0;
}