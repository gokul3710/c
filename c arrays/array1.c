#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int arr[100];
    int i,j,limit,count=0,flag=0,dup,sum =0;
    printf("enter the limit of array\n");
    scanf("%d",&limit);
    printf("enter %d values of array\n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<limit;i++){
        if(arr[i] < 7){
            if(arr[i] == 2|| arr[i]==3 || arr[i]==5){
                count=count +1;
            }
        }
    }

    if(count>=2){
        for(i=0;i<limit;i++){
            if(arr[i] >= 7){
                for(j=2;j<=arr[i]/2;j++){
                    if(arr[i]%j == 0  ){
                        flag = 1;
                        break;
                    }
                }

                if(flag == 0){
                    dup = 0;
                    for(j=0;j<limit;j++){
                        if(arr[i]== arr[j]){
                            dup = dup+1;
                        }
                        
                    }
                    if(dup >=2){
                        arr[i] = 0;
                    }
                }
            }
        }
    }

    for(i=0;i<limit;i++){
        sum = sum + arr[i];
    }

    printf("sum of the new array is %d :",sum);
    
    printf("the new array is : ");

    for(i=0;i<limit;i++){
        printf("%d\t",arr[i]);
    }

    return EXIT_SUCCESS;
}