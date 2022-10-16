#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("Largest number is %d",a);
        }else if(c>a){
            printf("Largest number is %d",c);
        }else if(a==c){
            printf("Largest numbers are %d and %d",a,c);
        }
    }else{
        if(b>c){
            printf("Largest number is %d",b);
        }else if(c>b){
            printf("Largest number is %d",c);
        }else if(b==c){
            printf("Largest numbers are %d and %d",b,c);
        }
    }
    return EXIT_SUCCESS;
}