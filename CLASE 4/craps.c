/*Craps*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice(void);

main(){
    int gamestatus, sum, mypoints;
    srand(time(NULL));
    sum = rollDice(); /*First roll of the dice*/

    switch (sum){
        case 7: case 11: 
            gamestatus  = 1; 
            break;
        
        case 2: case 3: case 12:
            gamestatus = 2;
            break;

        default: 
            gamestatus = 0;
            mypoints = sum; 
            break;
    }

    while (gamestatus == 0){
        sum =  rollDice();

        if (sum == mypoints)
            gamestatus = 1;
        else
            if (sum == 7)
                gamestatus = 2;                
    }

    if (gamestatus == 1)
        printf("Player wins\n");
    else 
        printf("Player loses \n");
    
    return 0;

}

int rollDice(void) 
{
     int die1, die2, worksum;
     die1 = 1  + (rand() % 6);
     die2 = 1  + (rand() % 6);

     worksum = die1 + die2; 
     printf("Player rolled %d +%d = %d\n", die1, die2, worksum);
     return worksum;
}