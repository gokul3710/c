#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int a[5],i,sum=0;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    for(i=0;i<5;i++){
        printf("%d  ",a[i]);
    }

    printf("\nSum is %d",sum);
    return EXIT_SUCCESS;
}