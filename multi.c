#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int i,n,m=0;
  printf("enter number");
  scanf("%d",&n);
  for(i=0;i<=10;i++){
    m=i*n;

        if(i==2)
            {
              printf("2*%d=%d\n",n,m);
            }
        if(i==3)
            {
              printf("3*%d=%d\n",n,m);
            }
        if(i==4)
            {
              printf("4*%d=%d\n",n,m);
            }
        if(i==5)
            {
              printf("5*%d=%d\n",n,m);
            }
        if(i==6)
            {
              printf("6*%d=%d\n",n,m);
            }
        if(i==7)
            {
              printf("7*%d=%d\n",n,m);
            }
        if(i==8)
            {
              printf("8*%d=%d\n",n,m);
            }
        if(i==9)
            {
              printf("9*%d=%d\n",n,m);
            }
        if(i==10)
            {
              printf("10*%d=%d\n",n,m);
            }
        

  }

  return EXIT_SUCCESS;
}