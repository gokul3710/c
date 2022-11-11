#include <stdio.h>
#include <stdlib.h>

int main(void){
    int row,col,count=3, allowed =1;
    for ( row = 1; row <= 9; row++)
    {
        for (col = 1; col <= count; col++)
        {
            if(col==1 || row%3 == 0 || col <= allowed){
                printf("* ");
            }
        }
        printf("\n");
        if(row %3 == 0){
            count = count +3;
            allowed = allowed +1;
        }
    }
    
    return EXIT_SUCCESS;
}