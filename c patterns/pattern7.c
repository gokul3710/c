#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,n=8,j;
    printf("enter a number  \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=3*i;j++){
            if(j == 1 || i == 1 || i ==3 && j<=6|| i == 6 && j<=9){
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