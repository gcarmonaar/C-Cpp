/*Como formular un algoritmo: Estudio de caso 1  (Repetición controlada por contador)
    Una clase de diez alumnos hizo un examen. Las calificaciones (enteros en el rango de 0 a 100)
    correspondientes a estre examen están a su disposición. Determine el promedio de la clase en 
    este examen.
    
El promedio de la clase es igual a la suma de las calificaciones divida por el número de alumnos. 
El algoritmo para resolver este problema en una computadora, debe introducir cada una de las cali-
ficaciones, ejecutar el cálculo de promedio e imprimir el resultados. */
/*Set total to zero
  set grade counter to one

  while grade counter is less than or equal to ten
    input the next grade
    add the grade into the total 
    add one to the grade counter
    
  set the class average to the total divided by ten
  print the class average*/

#include <stdio.h>

int main()
{
    int counter, grade, total, average;

    /*Initialization phase*/
    total = 0;
    counter = 1;
    
    /*Processing phase*/
    while (counter <= 10){
        printf("Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter = counter + 1;
    }

    /* Termination phase*/
    average = total / 10;
    printf("Class average is %d\n", average);
    
    return 0; /*Indicate program ended successfully*/
}