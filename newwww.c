#include <stdio.h>
#include<stdlib.h>

void getArray();
void displayArray();


int main(void){
    getArray();
    displayArray();
    return EXIT_SUCCESS;
}

void getArray(){
    int values[3],i;
    printf("Enter 3 numbers");
    for(i=0;i<3;i++){
        scanf("%d",&values[i]);
    }
}

void displayArray(){
    int j,arr[3];
    printf("The array is;\n");
    for(j=0;j<3;j++){
        printf("%d\t",arr[j]);
    }
}