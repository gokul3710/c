#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,n=12,j;
    printf("enter a number  \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=2*i;j++){
            if(j == 1 || i == 1 || i ==5 && j<i || i==12 && j<=i/2){
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