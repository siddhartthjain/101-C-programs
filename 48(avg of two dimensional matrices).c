 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int a[3][3],i,j,sum=0;
float avg;
printf("enter 9 integers");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        sum =sum +a[i][j];
    }
}

avg=(float)sum/9;
printf("the avg is %f",avg);

return 0;
}
