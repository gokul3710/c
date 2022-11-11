#include <stdio.h>
#include <stdlib.h>

int main(void){
    int row,col,count=0, allowed =1 ,inc = 4;
    for ( row = 1; row <= 12; row++)
    {
        if(row == allowed){
            count = count +3;
        }

        for (col = 1; col <= count; col++)
        {
            if(col==1 || row == allowed || row % 6 ==0 || row%10 == 1){
                printf("* ");
            }
        }
        printf("\n");
        if(row == allowed){
            allowed = allowed + inc;
            inc = inc +1;
        }
    }
    
    return EXIT_SUCCESS;
}