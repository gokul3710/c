#include <stdio.h>
#include<stdlib.h>

int getArray();
void displayArray(int[]);


int main(void){
    int array[3];
    array[3]=getArray();
    displayArray(array);
    return EXIT_SUCCESS;
}

int getArray(){
    int values[3],i;
    printf("Enter 3 numbers");
    for(i=0;i<3;i++){
        scanf("%d",&values[i]);
    }
    return values[3];
}

void displayArray(int arr[3]){
    int j;
    for(j=0;j<3;j++){
        printf("%d\t",arr[j]);
    }

}