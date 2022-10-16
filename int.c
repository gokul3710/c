#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float a,b,c,sum,avg;
    printf("Enter three numbers");
    scanf("%f%f%f",&a,&b,&c);
    sum = a+b+c;
    avg = sum/3;
    printf("average is :%f",avg);
    return EXIT_SUCCESS;
}