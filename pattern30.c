#include <stdio.h>
#include <stdlib.h>

int main(void){
    int row,col;
    for ( row = 1; row <= 9; row++)
    {
        for (col = 1; col <= 9; col++)
        {
            if(row == col + 4 || row + col == 14 || row + col == 6 || col == row + 4){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}