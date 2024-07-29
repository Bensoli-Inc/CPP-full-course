#include <iostream>
#include <iomanip>

//BOOLEANS
int main() {
  
    int num1 {40};
    int num2 {50};

    std::cout << "num1 :" << num1 <<std::endl;
    std::cout<< "num2 :" << num2 <<std::endl;

    std::cout << "................." << std::endl;
    std::cout << "comparing with logical operators" << std::endl;

    std::cout << std::boolalpha; //make bool show up as true/false instead of 1/0

    //use parenthesis
    std::cout << "num1 < num2 : " << (num1 < num2 ) <<std::endl;
    std::cout << "num1 <= num2 : " << (num1 <= num2 ) <<std::endl;
    std::cout << "num1 > num2 : " << (num1 > num2 ) <<std::endl;
    std::cout << "num1 >= num2 : " << (num1 >= num2 ) <<std::endl;
    std::cout << "num1 == num2 : " << (num1 == num2 ) <<std::endl;
    std::cout << "num1 != num2 : " << (num1 != num2 ) <<std::endl;

    return 0;
}