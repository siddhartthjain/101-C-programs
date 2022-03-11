#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i,j,n,k;
printf("enter he no of lines:");
scanf("%d",&n);
for(i=1;i<=(n+1)/2;i++)
{
    for(j=1;j<=i;j++)

    {
        printf("_ ");

    }
    for(k=n+2-2*i;k>0;k--)
    {
        printf("* ");
    }
    printf("\n");
}
for(i=1;i<(n+1)/2;i++)
{
    for(j=(n+1)/2-i;j>0;j--)
    {
        printf("_ ");

    }
    for(k=1;k<=1+2*i;k++)
    {
        printf("* ");

    }
    printf("\n");
}
return 0;
}
