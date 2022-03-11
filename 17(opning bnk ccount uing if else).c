#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 int age;
 printf("enter age:");
 scanf("%d",&age);
 if(age>=18)
 {
     printf("you can open bank account");

 }
 else
 {
     printf("sorry you are not eligible to open bank aacount");
 }
 return 0;
}
