/*Addition program */
#include <iostream>
using namespace std;
main(){
    int integer1, integer2, sum;
    cout << "Enter two numbers: ";
    cin >> integer1 >> integer2;
    sum=integer1+integer2;
    cout << "The sum of " << integer1 << " and " << integer2 << " is: " << sum << endl;
    return 0;
}