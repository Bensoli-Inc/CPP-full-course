#include <iostream>

int addNumbers (int num1, int num2) {
   int sum = num1 + num2;

   return sum;
}

int main() {
        int total = addNumbers(4, 6);
    std::cout << total << std::endl;
    return 0;
}