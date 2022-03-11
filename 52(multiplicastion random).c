 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int p,q,i,j,m,n,k,a[p][q],b[m][n],c[p][n];
printf("the rows and columns of 1 st matrices?");
scanf("%d,%d",&p,&q);
printf("the rows and columns of 2nd matrices?");
scanf("%d,%d",&m,&n);
if(q==m)
{


printf("enter %d integers",p*q);
for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
printf("enter %d integers",m*n);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[i][j]);
    }
}

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}
printf("thee multiplication is\n");

for(i=0;i<p;i++)
{
    for(j=0;j<n;j++)
    {
        c[i][j]=0;
       for(k=0;k<n;k++)
       {
           c[i][j]=c[i][j]+a[i][k]*b[k][j];
       }
    }
}
for(i=0;i<p;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
}
else
{
    printf("the multiplication is not possible");
}
return 0;
}
