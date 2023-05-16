/*Generación de número aleatorios*/
/*i = rand(); genera un n+umero entero entre 0 y RAND_MAX, en donde este deberá ser por lo menos 32767, que el 
el valor máximo de un entero de dos bytes.*/
/*Desarrollamos un programa para simular 20 tiradas de un dado de seis caras, y se imprime su valor en cada una 
de ellas. Se utilizará el operador de módulo(%) en conjunto con rand de la siguiente forma:
    rand() % 6
para producir enteros en el rango 0 a 5 (llamado dimensionar).*/
/* Shifted, scaled integers produced by 1 + rand() % 6*/
#include <stdio.h>
#include <stdlib.h> /*En donde se encuentra el prototipo de la función rand*/

main()
{
    int i;

    for(i = 1; i <= 20; i++){
        printf("%10d", 1 + (rand() % 6));
        
        if (i % 5 ==0)
            printf("\n");
    }

    return 0;
}