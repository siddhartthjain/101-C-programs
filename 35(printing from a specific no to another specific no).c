#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int i,n;
printf("entr no:");
scanf("%d",&n);
if(n==-1)
{
    exit(0);
}
 else if(n>(-32))
{
    for(i=n;i>=-32;i--)
    {
        printf("%d\n",i);
    }
}
else if(n<-32)
{
    for(i=n;i<=-32;i++)
    {
        printf("%d\n",i);
    }
}



return 0;
}
