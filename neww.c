#include <stdio.h>
#include <stdlib.h>

int main(void) {
int num1,num2, choice,result;
printf("enter any two numbers: ");
scanf("%d %d", &num1, &num2);
printf("1 for addition\n2 for subtaction\n3for multipliation\n4 for division");
scanf("%d",&choice);
if(choice==1){
    result=num1+num2;
    printf("%d",result);
}else if(choice==2){
    result=num1-num2;
    printf("%d",result);
}else if(choice==3){
    result=num1*num2;
    printf("%d",result);
}else if(choice==4){
    result=num1/num2;
    printf("%d",result);
}else{
    printf("jhagdc");
}

return EXIT_SUCCESS;
}