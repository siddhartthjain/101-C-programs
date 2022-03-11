#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i,j,n;
printf("the no of line you want:");
scanf("%d",&n);
for (i=1;i<=n; i++)
{
for(j=1;j<=i;j++)
    printf("* ");
printf("\n");
}

return 0;
}
