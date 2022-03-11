  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 int i,l;
 char a[30];
 printf("enter string");
 gets(a);
 l=strlen(a);
 for(i=0;i<l;i++)
 {
     printf("%c\n",a[i]);
 }

  return 0;
}

