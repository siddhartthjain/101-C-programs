#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int rank;
   printf("enter rank:");
   scanf("%d",&rank);
   if(rank==1)
   {
       printf("your salary is 250000");
   }
   if(rank==2)
   {
       printf("your salary is 210000");
   }
   if(rank==3)
   {
       printf("your salary is 25000");
   }
   if(rank>=4)
   {
       printf("your salary is 5000");
   }
return 0;
}
