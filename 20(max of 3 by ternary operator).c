#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,b ,c,d,e;
    printf("enter 3 no.s:");
    scanf("%d%d%d",&a,&b,&c);
    d=a>b?a:b;
    e=d>c?d:c;
    printf("the max no is %d",e);
return 0;
}
