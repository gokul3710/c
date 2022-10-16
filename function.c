#include <stdio.h>
#include <stdlib.h>

void sum();

int main(void){
    sum();
    return EXIT_SUCCESS;
}

void sum(){
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
}