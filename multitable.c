#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,n,product;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        product=i*n;
        printf("%d x %d = %d\n",i,n,product);
    }
    return EXIT_SUCCESS;

}