// istream examples
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main()
{
  std::ifstream infile("abc.txt");
  if (!infile.is_open()) {
    throw std::exception();
  }
  std::string token;
  while (infile >> token) {
    std::cout << "Next token: " << token << '\n';
  }

  std::istringstream input("2 3 - 4 -5 + /");
  while (input >> token) {
    std::cout << "Next token: " << token << '\n';
    if (token.size() == 1 and (token.find_first_of("+-*/") != std::string::npos))
      std::cout << "Token is and operator.\n";
    else std::cout << "Token is a number.\n";
  }
}