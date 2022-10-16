#include<stdio.h>
#include<stdlib.h>
int sum(int,int);
int main(void){
    int num1,num2,result;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    result=sum(num1,num2);
    printf("The result is %d",result);
    return EXIT_SUCCESS;
}

int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}