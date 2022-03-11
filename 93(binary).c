    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
int no,i,l,count=0;
int  c[50];
printf("enter no");
scanf("%d",&no);
for(i=0;no!=0;i++)
{
    c[i]=no%2;
    no=no/2;
    count++;


//puts(c);
for(i=count-1;i>=0;i--)
{
    printf("%d",c[i]);
}
    return 0;
}
