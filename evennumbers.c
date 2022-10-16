#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return EXIT_SUCCESS;

}