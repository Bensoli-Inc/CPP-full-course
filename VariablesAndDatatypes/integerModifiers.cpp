#include <iostream>
  

  //INTEGER MODIFIERS 
int main() {

   signed int value1 {10};
   signed int value2 {-300};

    std::cout << "value1: " << value1 <<std::endl;
    std::cout << "value2: " << value2 <<std::endl;
    std::cout << "Size of value1: " << (sizeof(value1)) <<std::endl;
    std::cout << "Size of value2: " << (sizeof(value2)) <<std::endl;

    unsigned int value3 {4};
    // unsigned int value4 {-5}; -compiler error. For unsigned you can only store +ve nos.

    short num3 {-32756};
    short int num3 {-44756};

    long num3 {-32756};
    long long int num3 {-44756};

    return 0;
}