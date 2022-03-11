 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int divisors(int);
int main()
{
    int a;
    printf("enter no.");
    scanf("%d",&a);
    divisors(a);
}
int divisors(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
