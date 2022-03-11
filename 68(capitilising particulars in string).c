  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int l,i;
char a[50];
printf("enter line ");
gets(a);
l=strlen(a);

for(i=0;i<l;i++)
{
    if(i==0)
    {
        a[i]=a[i]-32;
    }
    if(a[i]==' ')
    {
        i++;
        a[i]=a[i]-32;
        i--;
    }
    printf("%c",a[i]);
}
  return 0;
}

