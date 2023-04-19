/*  If student's grade is greater than or equal to 60:
        print "Passed"
    else:
        print"Failed*/

/*En C se tiene un operador codicional terciario (?:). Los operandos junto con el operador condicional, conforman una expresión
condicional

El primer operador es un condicional , el segundo operando es el valor de toda la expresión condicional si la condición es verdadera, y el tercer
operando es el valor de toda la expresión condicional si la condición es falsa.*/
#include <stdio.h>

int main()
{
    int grade;

    grade = 8;

    
    //printf("%s\n", grade >= 60 ? "Passed" : "Failed");
    grade >= 60 ? printf("Passed\n") : printf("Failed\n");
    
    return 0;
}