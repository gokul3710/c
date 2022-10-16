#include <stdio.h>
#include <stdlib.h>

int main(void){
    char name[50],i,count=0,flag=0;
    printf("Enter your name ");
    scanf("%s",name);
    for(i=0;i<50;i++){
       if((name[i] >= 97 && name[i] <= 122) || (name[i] >= 65 && name[i] <= 90)){
        count++;
       }else{
        break;
       }
    }
    for(i=0;i<count;i++){
        if(name[i]==name[(count-i-1)]){
            flag=1;
        }else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("The entered word is a palindrome");
    }else{
        printf("The entered word is not a palindrome");
    }
    return EXIT_SUCCESS;
}