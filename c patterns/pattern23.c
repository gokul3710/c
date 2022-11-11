#include <stdio.h>
#include <stdlib.h>

int main(void){
    int row,col,count=5, allowed =1 ,inc = 3;
    for ( row = 1; row <= 15; row++)
    {
        for (col = 1; col <= count; col++)
        {
            if(col==1 || row == allowed && row<10){
                printf("* ");
            }
        }
        printf("\n");
        if(row == allowed){
            allowed = allowed+inc;
            count = count + 5;
            inc = inc +2;
        }
    }
    
    return EXIT_SUCCESS;
}