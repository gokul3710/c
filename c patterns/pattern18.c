#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,count=3;
    for ( i = 1; i <= 9; i++)
    {
        if(i%4 == 0){
            count = count +3;
        }
        for (j = 1; j <= count; j++)
        {
            if(j==1 || i != 3  && i != 6 && i != 7){
                printf("* ");
            }
        }
        printf("\n");
        
        
        
    }
    
    return EXIT_SUCCESS;
}