#include<stdio.h>
#include<conio.h>
int main()
{
int no,i,result=1;
double count=0;
printf("enter no");
scanf("%d",&no);
for(i=2;i<=no;i++)
{
result =result*i;
}
while(result!=0)
{
result=result/10;
count++;
}
printf("the no of digits are %lf",count);
return 0;
}

