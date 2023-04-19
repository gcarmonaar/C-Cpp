/*Addition program */
#include <stdio.h>
main(){
    int integer1, integer2, sum; /*Declaración <tipo de dato> <nombres>*/

    /* 
    printf("Enter two numbers \n");
    scanf("%d%d",&integer1,&integer2);
    */

    printf("Enter first integer \n "); /* Salida en pantalla con salto de línea*/
    scanf("%d", &integer1); /*Guardar en memoria la variable integer1 de tipo entero*/
    printf("Enter second integer \n");
    scanf("%d", &integer2);
    sum=integer1+integer2;
    printf("The sum of %d and %d is %d \n ", integer1, integer2, sum);
    return 0;
}