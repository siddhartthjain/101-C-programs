 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i, a[10],sum=0;
printf("print 10 integers in array:");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);

}
printf("the array you printed is :");
for(i=0;i<10;i++)
{
    printf("%d\t",i);
}
for(i=0;i<10;i++)
{
sum =sum +a[i];

}
printf("\n the sum is  %d",sum);



return 0;
}
