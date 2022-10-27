#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,count=1,num=2;
    for ( i = 1; i <= 14; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            if(j==1 || i!=count ){
                printf("* ");
            }
        }
        printf("\n");
        if(count == i){
            count = count +num;
            num++;
        }
        
    }
    
    return EXIT_SUCCESS;
}