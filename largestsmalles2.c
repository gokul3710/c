#include<stdio.h>
#include<stdlib.h>

int main(void) {
    float a,b;
    printf("enter two numbers");
    scanf("%f%f",&a,&b);
    if(a==b){
        printf("both numbers are equal");
    }else{
        if(a>b){
            printf("Larger number is %f",a);
        }else{
            printf("Larger number is %f",b);
        }
    }
}