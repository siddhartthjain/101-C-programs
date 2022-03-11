 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int sum(int ,int);
int main()
{int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}
int sum(int c,int d)
{
    int e;
    e=c+d;
    printf("the sum is %d",e);
return 0;
}

