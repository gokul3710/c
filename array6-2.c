#include <stdio.h>
#include <stdlib.h>

int main(void){
    int size,array1[size][size],array2[size][size],sum[size][size],j,i;
    printf("Enter the size of arrays: ");
    scanf("%d",&size);
    printf("Enter values of array1\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&array1[i][j]);
        }
    }
    printf("Enter values of array2\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&array2[i][j]);
        }
    }

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
          sum[i][j]=array1[i][j]+array2[i][j];
        }
    }

    printf("Sum of values are\n");

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}