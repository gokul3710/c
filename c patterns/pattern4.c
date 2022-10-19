#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,j;
    int k = 8;
    for(i=1;i<k;i++){
        for(j=1;j<k;j++){
            if( i == k-1 || i%3 == 1 && j%2 == 1 || i == k/2 && j%i == 2) {
                if (j == 3 && i==4 || j==5 && i==4)
                {
                    printf("  "); 
                }else{
                    printf("* ");  
                }
            }
            else{
               printf("  "); 
            }
            
        }
        printf("\n");
    }
    return EXIT_SUCCESS;

}