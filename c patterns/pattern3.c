#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,n,j;
    int rows ;
    printf("enter a number");
    scanf("%d",&n);
    rows = 2*n;
    for(i=1;i<=rows-1;i++){
        for(j=1;j<rows;j++){
            if(j == 1 || j== rows - 1 || i == 1  || j == i || j == rows - i || i ==rows-1) {
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