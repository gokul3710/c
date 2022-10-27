#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i,j,count=2;
    for(i=1;i<=12;i++){
        for(j=1;j<=count;j++){
            if(j==1 || i ==1 || i==5 || i==6 || i>=10){
                printf("* ");
            }
        }
        printf("\n");
        if(i<10 && i%2 == 0){
            count++;
        }
    }
    return EXIT_SUCCESS;
}
