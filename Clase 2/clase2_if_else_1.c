/*  If student's grade is greater than or equal to 60:
        print "Passed"
    else:
        print"Failed*/
#include <stdio.h>

int main()
{
    int grade;

    grade = 95;
    
    if(grade >= 60)
    {
        printf("Passed\n");
    /*  contador = contador +1;
        printf("%d\n", contador);*/
    }
        
    else
    {
        printf("Failed\n");
    }
    return 0;
}