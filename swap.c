#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a=5,b=6;
    a=b+a;
    b=a-b;
    a=a-b;
    printf("a:%d b:%d",a,b);
    return EXIT_SUCCESS;
}