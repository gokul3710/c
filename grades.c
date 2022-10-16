#include<stdio.h>
#include<stdlib.h>

int main(void) {
    float grade;
    printf("Enter your final mark precentage");
    scanf("%f",&grade);
    if(grade>100 || grade<0){
        printf("Invalid Entry");
    }else if(grade>=90){
        printf("Congrats,You have got A grade");
    }else if(grade>=80 && grade<90){
        printf("Congrats,You have got B grade");
    }else if(grade>=70 && grade<80){
        printf("Congrats,You have got C grade");
    }else if(grade>=60 && grade<70){
        printf("Congrats,You have got D grade");
    }else if(grade>=50 && grade<60){
        printf("Congrats,You have got E grade");
    }else{
        printf("You have failed the exam");
    }
    return EXIT_SUCCESS;
}