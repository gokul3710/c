#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[3][3],j,i;
    printf("Enter 9 numbers");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",array[i][j]);
        } printf("\n");
    }

    return EXIT_SUCCESS;
}