    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
int a,b,i;
double c=1,d=1,e;
printf("enter two nos");
scanf("%d%d",&a,&b);
for(i=2;i<=a;i++)
{
    c=c*i;
}
for(i=2;i<=b;i++)
{
    d=d*i;
}
printf("the sum of their facorial is\n");
e=c+d;
printf("%lf",e);
    return 0;
}
