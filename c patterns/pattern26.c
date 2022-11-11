#include <stdio.h>
#include <stdlib.h>

int main(void){
    int row,col,count=2, allowed =1 ,inc = 2;
    for ( row = 1; row <= 12; row++)
    {
        for (col = 1; col <= count; col++)
        {
            if(col==1 || row == allowed && row <8 ){
                printf("* ");
            }
        }
        printf("\n");
        if(row == allowed){
            allowed = allowed + inc;
            count = 2 * count;
            inc = inc +1;
        }
    }
    
    return EXIT_SUCCESS;
}