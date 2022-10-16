#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,n,j;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;

}