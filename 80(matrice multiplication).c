    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int a[3][3],b[3][3],i,j,k,c[3][3];
int *p1,*p2;
printf("enter 9 integers");
for(i=0;i<3;i++)
{


    for(j=0;j<3;j++)
{
    scanf("%d",&a[i][j]);
}
}
p1=a;
printf("enter 9 integers");
for(i=0;i<3;i++)
{


    for(j=0;j<3;j++)
{
    scanf("%d",&b[i][j]);
}
}
p2=b;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        c[i][j]=0;
        for(k=0;k<3;k++)
        {
            c[i][j]=c[i][j]+ *(p1+10*i+k)*(*(p2+10*k+j));

        }
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}

  return 0;
}
