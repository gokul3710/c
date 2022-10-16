#include <stdio.h>
#include <stdlib.h>

int main(void){
    char name[50];
    printf("Enter your name ");
    scanf("%s",name);
    printf("Your name is %s",name);
    return EXIT_SUCCESS;
}