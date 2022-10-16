#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b,c;
    printf("enter 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c){
        printf("All Numbers Are Equal");
    }else if(a>=b && a>=c){
        printf("Largest Number is %d",a);
    }else if(b>=a && b>=c){
        printf("Largest Number is %d",b);
    }else if(c>=a && c>=b){
        printf("Largest Number is %d",c);
    }
    return EXIT_SUCCESS;
}