#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int input;
    printf("Enter 1 for sunday \n2 for monday \n3 for tuesday\n4 for wednesday \n5for thursday \n6 for friday \n7 for saturday");
    scanf("%d",&input);
    switch (input)
    {
    case 1:
        printf("You chose sunday");
        break;
    case 2:
        printf("You chose monday");
        break;
    case 3:
        printf("You chose tuesday");
        break;
    case 4:
        printf("You chose wednesday");
        break;
    case 5:
        printf("You chose thursday");
        break;
    case 6:
        printf("You chose friday");
        break;
    case 7:
        printf("You chose Saturday");
        break;
    
    default:
        printf("Invalid Entry");
        break;
    }
    return EXIT_SUCCESS;
}