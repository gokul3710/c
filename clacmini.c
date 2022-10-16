#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b,calc;
    float result;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Enter 1 for addition \nEnter 2 for subtraction \nEnter 3 for multiplication \nEnter 4 for division");
    scanf("%d",&calc);
    if(calc==1){
        result=a+b;
        printf("result is %f",result);
    }else if(calc==2){
        result=a-b;
        printf("result is %f",result);
    }else if(calc==3){
        result=a*b;
        printf("result is %f",result);
    }else if (calc==4){
        result=a/b;
        printf("result is %f",result);
    }else{
        printf("invalid entry");
    }
    
return EXIT_SUCCESS;
}