#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int p;
    float r,n,si;
    printf("Enter Principal Amount (p)");
    scanf("%d",&p);
    printf("Enter intrest rate (r)");
    scanf("%f",&r);
    printf("Enter number of years (n)");
    scanf("%f",&n);
    si = p*r*n/100;
    printf("Simple Intrest (SI) is: %f",si);

    return EXIT_SUCCESS;
}