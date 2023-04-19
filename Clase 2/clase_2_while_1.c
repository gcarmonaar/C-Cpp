#include <stdio.h>

int main()
{
    int product;

    product = 2;

    
    while (product <= 1000){
        product = 2 * product;
        printf("%d\n ", product);
    }
    
    return 0;
}