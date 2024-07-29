#include <iostream>

int main() {
    int num1 = 15; //decimal
    int num2 = 017; //octal system
    int num3 = 0x0F; //hexadecimal
    int num4 = 0b00001111; //Binary

    std::cout  <<"number 1: " << num1 << std::endl;
    std::cout  <<"number 2: " << num2 << std::endl;
    std::cout  <<"number 3: " << num3 << std::endl;
    std::cout  <<"number 4: " << num4 << std::endl;

    return 0;
}