#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i,j,n;
printf("enter the no of lines");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=i+1;j++)
    {
        printf("\t");
        printf("%d",i*j);
    }
    printf("\n");
}

return 0;
}
