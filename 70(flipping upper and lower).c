  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,l;
char a[10];
printf("enter characters(upper and lower)");
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
    if(a[i]>='A' && a[i]<='Z')
    {
        a[i]=a[i]+32;
    }
   else if(a[i]>='a' && a[i]<='z')
    {
        a[i]=a[i]-32;
    }
}
    for(i=0;i<l;i++)
{
    printf("%c",a[i]);
}
  return 0;
}

