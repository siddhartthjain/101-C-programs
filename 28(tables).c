#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int n,i;
printf("enter no");
scanf("%d",&n);
for(i=0;i<=10;i++)
{
    printf("%d * %d=%d\n",n,i,n*i);
}

return 0;
}
