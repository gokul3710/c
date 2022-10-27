#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,count=4,row=1;
    for ( i = 1; i <= 7; i++)
    {
        for (j = 1; j <= count; j++)
        {
            if(j == 1 || i%2 == 1){
                printf("* ");
            }
            else if(j <= row){
                printf("* ");
            }
        }
        printf("\n");
        if(i%2 == 1){
            count = count +4;
            row = row + 1;
        } 
        
    }
    
    return EXIT_SUCCESS;
}