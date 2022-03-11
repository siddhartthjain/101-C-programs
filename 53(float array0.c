 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
float a[5],b[5],c,d,sum1=0.0,sum2=0.0;
int i;
printf("enter decimals " );
for(i=0;i<5;i++)
{
    scanf("%f",&a[i]);
}
printf("enter decimals in 2nd " );
for(i=0;i<5;i++)
{
    scanf("%f",&b[i]);
}
for(i=0;i<5;i++)
{
    sum1=sum1+a[i];
}
c=sum1/5;
for(i=0;i<5;i++)
{
    sum2=sum2+b[i];
}
d=sum2/5;
if(c>d)
{
    printf("the greater avg is %f and is from array 1",c);
}
else
{
    printf("the greater avg is %f and is from array 2",d);
}
return 0;
}
