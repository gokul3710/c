#include <stdio.h>
#include <stdlib.h>

int main(void){
    int row,col;
    for ( row = 1; row <= 15; row++)
    {
        for (col = 1; col <= 15; col++)
        {
            if(row + col == 16 || row ==col){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}