#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i,j,n,k;
printf("enter he no of lines:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=i+1;j++)
    {
        printf("%d",j);
    }
    printf("\t");
    for(k=j-1;k>=1;k--)
    {

        printf("%d",k);
    }
    printf("\n");
}
return 0;
}
