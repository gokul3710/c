#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a<0){
        printf("the number is negative");
    }else{
        printf("number is not negative");
    }
    return EXIT_SUCCESS;
}