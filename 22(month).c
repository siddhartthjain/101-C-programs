#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   int i;
   printf("enter no:");
   scanf("%d",&i);
   switch(i)
   {
   case 1:
    printf("its january");
    break;

       case 2:
    printf("its february");
    break;

    case 3:
    printf("its march");
    break;

    case 4:
    printf("its april");
    break;
    case 5:
    printf("its may");
    break;
    case 6:
    printf("its june");
    break;
    case 7:
    printf("its july");
    break;
    case 8:
    printf("its august");
    break;
    case 9:
    printf("its september");
    break;
    case 10:
    printf("its october");
    break;
    case 11:
    printf("its november");
    break;
    case 12:
    printf("its december");
    break;
    default:
        printf("enter correct no");
   }
return 0;
}
