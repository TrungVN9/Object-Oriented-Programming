#include <iostream>
#include <string>
#include <fstream> //Stream class to read and write from/to files
#include <regex>

/* Contact Book has 4 features:
    1. Add contact
        + Fist name
        + Last name
        + Phone number
        + Address
    2. Search contact
        + First and last Name
        + Phone number
    3. Help
        + Display information screen
    4. Exit
*/

std::string first_name, last_name, phone_number, adr;

void display_screen()
{
    std::cout << std::setw(50) << "CONTACT BOOK" << std::endl;
    std::cout << "\t1. Add Contact" << std::endl;
    std::cout << "\t2. Search Contact" << std::endl;
    std::cout << "\t3. Help" << std::endl;
    std::cout << "\t4. Exit" << std::endl;
}

// Check phone number within the length of 10 digits
bool is_num(std::string phone_num)
{
    std::regex regex("[[:digit:]]{3}-[[:digit:]]{3}-[[:digit:]]{4}");
    if (phone_num.length() == 12 && std::regex_match(phone_num, regex))
    {
        return true;
    }
    return false;
}
void add_contact()
{
    std::ofstream contact_file;
    contact_file.open("contact.txt");
    std::cout << "\tEnter Your First Name: ";
    std::cin >> first_name;
    std::cout << "\tEnter Your Last Name: ";
    std::cin >> last_name;
    // std::cout << "\tEnter Your Address: ";
    // std::cin.ignore();
    // getline(std::cin, adr);
    std::cout << "\tEnter Your Phone Number as XXX-XXX-XXXX: ";
    std::cin >> phone_number;

    // Check inputs validation
    if (is_num(phone_number) == true)
    {
        if (contact_file.is_open())
        {
            contact_file << first_name << "\n" << last_name << "\n" << adr << "\n" << phone_number << std::endl;
            std::cout << "\n\tSuccessfully!!!";
        }
        else
        {
            std::cout << "\nOpening Contact File Error!";
        }
    }
    else
    {
        std::cout << "\nInvalid Phone Number!!!";
    }
    std::cout << std::endl;
    contact_file.close();
}
void search_contact()
{
    bool found = false;
    std::ifstream contact_file("contact.txt");
    std::string key_word;
    std::cout << "\n\tSearch by First name, Last name, or Phone number: ";
    std::cin >> key_word;
    while(contact_file >> first_name >> last_name >> phone_number){
        if (key_word == first_name || key_word == last_name || key_word == phone_number){
            std::cout << "\n\n" << std::setw(50) << "CONTACT INFORMATION";
            std::cout <<"\n\n\tFirst name: " << first_name;
            std::cout <<"\n\n\tLast name: " << last_name;
            // getline(contact_file, adr);
            // std::cout <<"\n\n\tAddress: " << adr;
            std::cout <<"\n\n\tPhone number: " << phone_number << std::endl;
            found = true;
            break;
        }
    }
    if(found == false){
        std::cout<<"\n\tNo contact is found!!!\n\n";
    }
}
void help()
{
    std::cout << "\n\tContact Number: 1-800-888-9999" << std::endl;
}

int main()
{
    int option;
    std::string question;
    do
    {
        display_screen();
        std::cout << "\n\tOption: ";
        std::cin >> option;
        switch (option)
        {
        case 1:
            add_contact();
            break;
        case 2:
            search_contact();
            break;
        case 3:
            help();
            break;
        case 4:
            std::cout << "\n\tThank You For Choosing Our Program!!!";
            exit(0);
        default:
            std::cout << "\n\tInvalid Option!!!" << std::endl;
            break;
        }
        std::cout <<"\n\n\tWould You Like To Continue (y/yes or n/ no): ";
        std::cin >> question;
        std::cout << "\n";
    }while (question == "y" || question == "yes");
    return 0;
}
