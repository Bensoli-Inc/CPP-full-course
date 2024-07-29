#include <iostream>
#include <cmath>


int main(){

	double weight { 9.9 };
    
    //floor
    std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl;
    
    //ceil 
    std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl;
    
    //abs
    double savings {-10000 };
  
    std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
    std::cout << "Abs of savings is : " << std::abs(savings) << std::endl;
    
    //exp : f(x) = e ^ x , where e = 2.71828 . Test the result here against a calculator
    double exponential = std::exp(9);
    std::cout << "The exponential of 9 is : " << exponential << std::endl;
    
    //pow
    std::cout << "5 ^ 3 is : " << std::pow(5,4) << std::endl;
    std::cout << "9^6 is : " << std::pow(9,6) << std::endl;


    //log : reverse function of pow. if 2^3 = 8 , log 8 in base 2 = 3.  Log is like asking
    // to which exponent should we elevate 2 to get eight ? Log, by default computes the log
    // in base e. There also is another function which uses base 10 called log10
    
    // Try the reverse operation of  e^4 = 54.59 , it will be log 54.59 in base e = ? 
    std::cout << "Log ; to get 54.59, you would elevate e to the power of : "
             << std::log(54.59) << std::endl;
    
    //log10 , 10 ^ 3 = 1000  , to get 1k , you'd need to elevate 10 to the power of ? , this is log in base 10
    std::cout << "To get 1000, you'd need to elevate 10 to the power of : "
                 << std::log10(1000) << std::endl; 



    //sqrt
    std::cout << "The square root of 64 is : " << std::sqrt(64) << std::endl;
    
    //round. Halfway points are rounded away from 0. 2,5 is rounded to 5 for example
    std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl;
    std::cout << "2.5 is rounded to : " << std::round(2.5) << std::endl;
    std::cout << "2.4 is rounded to : " << std::round(2.4) << std::endl;
    
   
    return 0;
}