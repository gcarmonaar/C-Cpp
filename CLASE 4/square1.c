/*a programmes-defined square function*/
#include <stdio.h>
int square(int); /*function prototype*/


main()
{
    int x;
    for(x=1; x<= 10; x++)
        printf("%d ", square(x));
        
    printf("\n");
    return 0;
}

/*function definition*/

int square(int y) /* la función espera un parámetro de tipo entero y devuelve un entero */
{
    return y*y;
}

/*formato de la función
tipo de valor de regreso- nombre de la función (lista de parámetros)
{
    declaraciones
    enunciados
}*/

/*El tipo de valor void indica que una función no devolderá un valor.
Un valor de regreso no especifícado será siempre supuesto como int. */