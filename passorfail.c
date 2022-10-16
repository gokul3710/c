#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int mark;
    printf("Enter your mark");
    scanf("%d",&mark);
    if(mark>100){
        printf("Invalid Entry, Try Again");
    }else{
        if(mark<50){
           printf("You are failed");
        }else{
            printf("You are passed");
        }
        
    }
    return EXIT_SUCCESS;
}