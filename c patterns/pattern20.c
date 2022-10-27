#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,count=5,allowed=1,inc=2;
    for ( i = 1; i <= 10; i++)
    {
        for (j = 1; j <= count; j++)
        {
            if(j==1 || i == allowed){
                printf("* ");
            }
        }
        printf("\n");
        if(i == allowed){
            allowed= allowed + inc;
            inc = inc +1;
            count = count +5;
        }  
    }
    
    return EXIT_SUCCESS;
}