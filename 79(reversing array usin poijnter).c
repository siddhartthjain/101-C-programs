    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int a[5],i;
int *p[5];
printf("enter intgers");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
{
    p[i]=&a[5-1-i];
}
printf("reversing ");
for(i=0;i<5;i++)
{
    printf("%d\n",*p[i]);
}
  return 0;
}
