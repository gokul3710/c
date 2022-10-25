#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int array1[100],array2[100];
    int i,j,limit,count=0,flag=0,dup,sum =0;
    printf("enter the limit of array\n");
    scanf("%d",&limit);
    printf("enter %d values of array\n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&array1[i]);
    }

    for(i=0;i<limit;i++){
        if(array1[i] < 7){
            if(array1[i] == 2|| array1[i]==3 || array1[i]==5){
                count=count +1;
            }
        }
    }

    if(count>=2){
        for(i=0;i<limit;i++){
            if(array1[i] >= 7){
                for(j=2;j<=array1[i]/2;j++){
                    if(array1[i]%j == 0  ){
                        flag = 1;
                        break;
                    }
                }

                if(flag == 0){
                    dup = 0;
                    for(j=0;j<limit;j++){
                        if(array1[i]== array1[j]){
                            dup = dup+1;
                        }
                        
                    }
                    if(dup >=2){
                        array1[i] = 0;
                    }
                }
            }
        }
    }

    for(i=0;i<limit;i++){
        sum = sum + array1[i];
    }

    printf("sum of the new array is %d :",sum);
    
    printf("the new array is : ");

    for(i=0;i<limit;i++){
        printf("%d\t",array1[i]);
    }

    return EXIT_SUCCESS;
}