#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,k,n;
    printf("Enter a number");
    scanf("%d",&n);
    k = -1*(n-1);
    for ( i = 1; i < 2*n; i++){
        for( j=1; j<= n; j++){
            if(j +k <=  +1 || j<=k+1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        k = k+1;
        printf("\n");
    }
    return EXIT_SUCCESS;
}