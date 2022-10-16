#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int i, power;
    for(i=0;i<5;i++){
        power = pow(11,i);
        printf("%d\n",power);
    }
    return EXIT_SUCCESS;
}