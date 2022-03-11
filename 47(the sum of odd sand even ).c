 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int a[10],i,odds=0,evens=0;
printf("enter 10 integers\n");

for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
    if(a[i]%2==0)
    {
        evens=evens+a[i];
    }
    else
    {
        odds=odds+a[i];
    }
}
printf("the sum of evens is %d\n",evens);
printf("the sum of odds are %d", odds);
return 0;
}
