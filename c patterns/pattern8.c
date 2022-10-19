#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,n,k=0;
    printf("Enter a number");
    scanf("%d",&n);
    for (i=1; i<=n; i++){
        for(j=1; j<2*n; j++){
            if(j-n < -1* k || j-n > k){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        k= k+1;
        printf("\n");
    }
    return EXIT_SUCCESS;
}