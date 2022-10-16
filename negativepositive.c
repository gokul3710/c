#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float a;
    printf("enter a number");
    scanf("%f",&a);
    if(a==0){
        printf("the number is neither positive nor negative");
    }else{
        if(a<0){
            printf("number is negative");
        }else{
            printf("number is positive");
        }
    }
    return EXIT_SUCCESS;
}