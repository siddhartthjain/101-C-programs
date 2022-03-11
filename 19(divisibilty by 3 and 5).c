#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

 int num;
 printf("enter number:");
 scanf("%d",&num);
 if(num%3==0 && num%5==0 )
 {
     printf("the num is divisible by both 3 and 5");
 }
 else
    printf("the num is not divisible by 3 and 5");
 return 0;
}
