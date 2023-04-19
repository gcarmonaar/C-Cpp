#include <stdio.h>

int main()
{   
    float average; /*new data type*/
    int counter, grade, total;

    /*Initialization phase*/
    total = 0;
    counter = 0;

    /*Processing phase*/
    printf("Enter grade -1 to end: ");
    scanf("%d", &grade);

    while(grade != -1)
    {
        total = total + grade;
        counter = counter + 1;
        printf("Enter grade, -1 to end: ");
        scanf("%d", &grade);
        
    }

    /*Termination phase*/

    if(counter != 0){
        average = (float)total / counter;
        printf("Class average is %.2f", average);
    
    }
    else{
        printf("No grade were entered\n");
    }

    return 0;
}