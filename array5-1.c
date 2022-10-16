#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int limit,i,array1[100],array2[100],temp;
    printf("enter the limit of arrays\n");
    scanf("%d",&limit);
    printf("enter %d values of array 1\n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&array1[i]);
    }
    printf("enter %d values of array 2\n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&array2[i]);
    }

    for(i=0;i<limit;i++){
        array1[i]=array1[i]+array2[i];
        array2[i]=array1[i]-array2[i];
        array1[i]=array1[i]-array2[i];
    }

    printf("Interchanged values are\n array 1=");
    for(i=0;i<limit;i++){
        printf("%d\t",array1[i]);
    }
    printf("\n array 2=");
    for(i=0;i<limit;i++){
        printf("%d\t",array2[i]);
    }


    return EXIT_SUCCESS;
}