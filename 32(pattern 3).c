#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

int i,j,n,q=1;
printf("enter the no of lines:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
        q=1;
    for(j=n-i;j>=0;j--)
    {
        printf("%d",q);
        q++;
    }
    printf("\n");
}
return 0;
}
