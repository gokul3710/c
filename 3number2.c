#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c){
        printf("all numbers are equal");
    }else{
        if(a==b && a>b){
            prinft("the largest nukbers are %d and %d",a,b);
        }
    }
    return EXIT_SUCCESS;
}
































    