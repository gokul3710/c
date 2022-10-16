#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int num, a[num],i,searchkey,flag=0;
    printf("Enter no:of values\n");
    scanf("%d",&num);
    printf("Enter %d numbers\n",num);
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter search key");
    scanf("%d",&searchkey);
    for(i=0;i<num;i++){
        if(searchkey==a[i]){
            flag=1;
            printf("item found at %d position\n",i+1);
            break;
        }
    }
    if(flag==0){
        printf("Value not found");
    }

    return EXIT_SUCCESS;
}