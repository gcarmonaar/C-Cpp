/*Roll a six-sided die 6000 times*/
#include <stdio.h>
#include <stdlib.h>

main()
{
    int face, roll, frequency1 = 0, frequency2 = 0, frequency3 = 0, frequency4 = 0,
    frequency5 = 0, frequency6 = 0;

    for (roll = 1; roll<= 6000; roll++)
    {
        face = 1 + rand() % 6;

        switch(face){
        case 1:
            ++ frequency1;
            break;

        case 2:
            ++ frequency2;
            break;

         case 3:
            ++ frequency3;
            break;

        case 4:
            ++ frequency4;
            break;
        
        case 5:
            ++ frequency5;
            break;
        
        case 6: 
            ++ frequency6;
            break;
        }
    }

    printf("%s%13s\n", "Face", "Frequency");
    printf(" 1%13d\n", frequency1);
    printf(" 2%13d\n", frequency2);
    printf(" 3%13d\n", frequency3);
    printf(" 4%13d\n", frequency4);
    printf(" 5%13d\n", frequency5);
    printf(" 6%13d\n", frequency6);
}