#include <stdio.h>
#include <stdlib.h>

int main(void){
    int row,col;
    for ( row = 1; row <= 4; row++)
    {
        for (col = 1; col <= row + 4; col++)
        {
            if(row>col){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}