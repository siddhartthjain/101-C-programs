#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   char a;
   printf("enter any character(small):");
   scanf("%c",&a);
   if('a'<=a && a<='z')
   {
       if(a=='a'&& a=='e'&& a=='i' && a=='o' && a=='u')
       printf("you entered vowel");
       else
        printf("you entered consonant");
   }
   else
    printf("enter small character");
return 0;
}
