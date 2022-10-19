#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,n,j;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i == j || j ==1 || i == n){
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