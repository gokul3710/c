#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int num, a[num],i;
    printf("Enter no:of values\n");
    scanf("%d",&num);
    printf("Enter %d numbers\n",num);
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<num;i++){
        printf("Entered values are %d\n",a[i]);
    }
    return EXIT_SUCCESS;
}