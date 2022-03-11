  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i;
char a[3];
printf("enter three characters");
gets(a);
for(i=0;i<3;i++)
{
     if(a[i]>='x')
    {
        a[i]=a[i]-23;
    }
    else
    a[i]=a[i]+3;

}
for(i=0;i<3;i++)
{
    printf("%c",a[i]);
}
  return 0;
}

