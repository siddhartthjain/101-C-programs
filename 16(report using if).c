#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 int num;
 printf("enter no in maths test");
 scanf("%d",&num);
 if(num>=90)
 {
     printf("the grade is A");
 }
 if(num>=80 && num<90)
 {
     printf("the grade is B");
 }

   if(num>=70 && num<80)
 {
     printf("the grade is C");

 }
  if(num>=60 && num<70)
 {
     printf("the grade is E");
 }
  if(num>=50 && num<60)
 {
     printf("the grade is F");
 }
  if( num<50)
 {
     printf("failed");
 }







 return 0;
}
