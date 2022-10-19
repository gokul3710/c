#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<12;j++){
            if( j==i || i+j == 6 || j==i+4 || i+j ==10 ){
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