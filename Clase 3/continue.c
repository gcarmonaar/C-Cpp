/*Using the continue statement in a for structure*/
#include <stdio.h>

int main()
{
    int x;

    for(x=1; x<=10;x++){
        if(x==5){
            continue; //skip if x==5
        }
        printf("%d ",x);
    }
    printf("\nUsed continue to skip printing value x==5\n");
    return 0;
}
