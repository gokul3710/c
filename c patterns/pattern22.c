#include <stdio.h>
#include <stdlib.h>

int main(void){
    int row,col,count;
    for ( row = 1; row <= 13; row++)
    {
        if(row%6 == 1){
            count = 5;
        }
        else if(row%6 == 4){
            count = 3;
        }
        for (col = 1; col <= count; col++)
        {
            if(col==1 || row % 3 == 1 ){
                printf("* ");
            }
        }
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}