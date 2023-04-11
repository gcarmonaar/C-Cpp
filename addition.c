/*Addition program */
#include <stdio.h>
main(){
    int integer1, integer2, sum;
    printf("Enter first integer \n ");
    scanf("%d", &integer1);
    printf("Enter second integer \n");
    scanf("%d", &integer2);
    sum=integer1+integer2;
    printf("The sum of %d and %d is %d \n ", integer1, integer2, sum);
    return 0;
}