#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int n,sum,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
return EXIT_SUCCESS;    
}