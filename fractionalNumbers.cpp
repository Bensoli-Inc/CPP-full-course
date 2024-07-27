#include <iostream>
#include <iomanip>

//FRACTIONAL NUMBERS
int main() {
  
    //initializing the variables
    float num1 {1.23456789012384940f};
    double num2 {1.12338575899303098};
    long double num3 {1.12333857995768375L};
  
//printing out the sizes
    std::cout << "size of float : " << (sizeof(float)) <<std::endl;
    std::cout << "size of double : " << sizeof(double) <<std::endl;
    std::cout << "size of long double: " << sizeof(long double) <<std::endl;

//precision
  std::cout << std::setprecision(20);
    std::cout << "num1 is : " << num1 <<std::endl; //7digits
    std::cout << "num2 is : " << num2 <<std::endl; //15*digits
    std::cout << "num3 is : " << num3 <<std::endl; //15+ digits

    return 0;
}