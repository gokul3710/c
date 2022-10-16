#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int limit,i,values[100],j;
    printf("enter the limit\n");
    scanf("%d",&limit);
    printf("enter %d values\n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]);
    }
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(values[j]>values[i]){
                values[i]=values[i]+values[j];
                values[j]=values[i]-values[j];
                values[i]=values[i]-values[j];
            }
        }
    }
    printf("arranged in descending order\t");
    for(i=0;i<limit;i++){
        printf("%d\t",values[i]);
    }


    return EXIT_SUCCESS;
}