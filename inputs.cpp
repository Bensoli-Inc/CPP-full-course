#include <iostream>



int main() {
    int age;
    std::string name;

    std::cout << "Please enter your Name :";
    std::cin >> name;
    std::cout << "Enter your age :";
    std::cin >> age;
    std::cout << "Hello " << name << " your are " << age << " years old" << std::endl;
    return 0;
}