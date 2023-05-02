#include <stdio.h>

int main()
{
    int counter;

    for (counter=1; counter<=10; counter++) //inicio; condición de término; incremento
        printf("%d\n",counter);
    
    return 0;
}

/*Las siguientes expresiones son equivalentes:
counter=counter+1
counter+=1
++counter
counter++
*/