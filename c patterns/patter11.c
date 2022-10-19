#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,n=6;
    int k=n-1;
    for(i=1; i<=n; i++){
        for(j=1; j<2*n; j++){
            if(j == n-k || j == n+k || i == 1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
            k=k-1;
            printf("\n");
    }
    return EXIT_SUCCESS;
}