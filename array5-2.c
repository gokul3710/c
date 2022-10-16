#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int limit,i,values[100];
    printf("enter the limit\n");
    scanf("%d",&limit);
    printf("enter %d values\n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]);
    }
    printf("even numbers are\t");
    for(i=0;i<limit;i++){
        if(values[i]%2==0){
            printf("%d\t",values[i]);
        }
    }


    return EXIT_SUCCESS;
}