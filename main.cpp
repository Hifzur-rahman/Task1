#include <iostream>


int main() {
  std::string username,number;
  int age;

  std::cout << "Hello World! \n";

  std::cout << "Enter the Your Name \n \n";
  std::cin >> username;
  std::cout << "Thank for letting us know your Name is " << username << "\n \n";

  std::cout << "Enter the Your Mobile Number 10 digit \n";
  std::cin >> number;
  std::cout << "Thank for letting us know your Mobile Number " << number << "\n \n";

  // std::cout << "Is Your age " << age << " correct ? \n";

  std::cout << username << " - Can you enter your age ";
  std::cin>> age;
  std::cout << "Thank for letting us know your age  is " << age << "\n \n \t";

  std::cout << "I hope you are doing fine "<< username << "\n";


}