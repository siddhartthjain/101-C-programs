#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int a,b,c,i;
a=1;
b=2;
printf("%d,%d,",a,b);
for(i=1;i<=8;i++)
{
    c=a+b;
    a=b;
    b=c;

    printf("%d,",c);
}


return 0;
}
