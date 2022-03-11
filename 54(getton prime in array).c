 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i,a[5],j,count=0,t=0;
printf("enter integers");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
{
    count=0;
    for(j=1;j<=a[i];j++)
    {
        if(a[i]%j==0)
            count++;


    }
    if(count==2)
    {
        printf("%d\n",a[i]);
        printf("the index of above no is %d\n",i+1 );
    }
    else if(count==1 || count >2)
    {
        t++;
        if(t==5)
        {
            printf("there is no prime");
        }
    }





}

return 0;
}
