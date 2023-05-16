/* finding the maximum of three integers*/
#include <stdio.h>

int maximum(int, int, int); /*function prototype*/

main()
{
    int a,b,c;

    printf("Enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Maximum is: %d\n", maximum(a,b,c));

    return 0;

}

/*function maximum definition*/
int maximum(int x, int y, int z)
{
    int max = x;

    if(y>max)
        max = y;

    if(z>max) 
        max = z;

    return max; 
}

/*  El prototipo de la función le indica al compilador el tipo de dato regresado por la misma, 
el número de parámetros que la función espera recibir, los tipos dde dichos parámetros y el
orden en el cual se esperan dichos parámetros:
int maximum(int, int, int); 
El prototipo indica que la función maximum recibe 3 argumentos de tipo int y devuelve un dato int. */

