#include <stdio.h>
#include <stdlib.h>

int main(void){
    int row,col,count=5,allowed=2,inc=3;
    for ( row = 1; row <= 13; row++)
    {
        for (col = 1; col <= count; col++)
        {
            if(col==1 || col ==2 || row == allowed){
                printf("* ");
            }
        }
        printf("\n"); 
        if(row == allowed){
            allowed = allowed + inc;
            inc = inc +1;
            count = count + 5;
        }
    }
    
    return EXIT_SUCCESS;
}