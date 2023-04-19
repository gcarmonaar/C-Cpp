/*  Si la calificación del alumno es mayor que  o igual a 90:
    imprima "A"
    De lo contrario:
        si la calificación del alumno es mayor que o igual a 80:
            Imprima "B"
        De lo contrario:
            Si la calificación del alumno es mayor que o igual a 70:
                Imprima "C"
            De lo contrario:
                Si la califación del alumno es mayor o igual qa 60:
                    Imprima  "D"
                De lo contrario: 
                    Imprima "F"
                */
#include <stdio.h>

int main()
{
    int grade;

    grade = 55;

    if(grade >= 90)
        printf("A\n");
    else{
        if(grade >= 80){
            printf("B\n");
        }
        else{
            if(grade >=70){
                printf("C\n");
                
            }
            else{
                if(grade >=60){
                    printf("D\n");
                }
                else{
                    printf("F\n");
                }

            }
        }
    }
            
    return 0;
}