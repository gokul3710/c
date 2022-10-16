#include<stdio.h>
#include<stdlib.h>
void sum(int,int);
int main(void){
    int num1,num2;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);
    sum(num1,num2);
    return EXIT_SUCCESS;
}

void sum(int a,int b){
    int sum;
    sum=a+b;
    printf("Sum is: %d",sum);
}