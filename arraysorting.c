#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int num, a[100],i,j;
    printf("Enter no:of values\n");
    scanf("%d",&num);
    printf("Enter %d numbers\n",num);
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<num-1;i++){
        for(j=i+1;j<num;j++){
            if(a[i]>a[j]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }

    for(i=0;i<num;i++){
        printf("%d\t",a[i]);
    }
    return EXIT_SUCCESS;
}