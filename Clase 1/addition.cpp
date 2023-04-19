/*Addition program */
#include <iostream>
main(){
    int integer1, integer2, sum;
    std::cout << "Enter first number: ";
    std::cin >> integer1;
    std::cout << "Enter second number: ";
    std::cin >> integer2;
    sum=integer1+integer2;
    std::cout << "The sum of " << integer1 << " and " << integer2 << " is: " << sum << std::endl;
    return 0;
}

