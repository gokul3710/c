#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<12;j++){
            if( j==i ||j+i==8 || i==2 && j==4){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}