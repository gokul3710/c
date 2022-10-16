#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int limit, a[10],i,sum=0;
    printf("Enter limit\n");
    scanf("%d",&limit);
    printf("Enter %d numbers\n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of the numbers are %d",sum);

    // for(i=0;i<limit;i++){
    //     printf("Entered values are %d\n",a[i]);
    // }
    return EXIT_SUCCESS;
}