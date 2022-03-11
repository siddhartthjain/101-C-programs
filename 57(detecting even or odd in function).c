 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int detect(int);
int main()
{
    int a;
    printf("enter no.");
    scanf("%d",&a);
    detect(a);
}
int detect(int c)
{
    if(c%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
