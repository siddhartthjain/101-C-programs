    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,count=0;
    char a[50];
    char *p;
    printf("enter name");
gets(a);

p=a;
for(i=0;*p!='\0';i++)
{
    count++;
    p++;
}
printf("the lentgh of string is %d",count);
  return 0;
}
