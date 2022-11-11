#include <stdio.h>

int main(void){
    int year=2005;

    if(year % 100 == 0 && year % 400 == 0 || year % 100 != 0 && year % 400 == 0 ){
        printf("%d is a leap year.",year);
    }
    else{
        printf("The year is not a leap year.");
    }
}