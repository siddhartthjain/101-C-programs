    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
int i,j=-1 ,c[10],count=0,m,n,d=1;
printf("enter 2 nos");
scanf("%d%d",&m,&n);
for(i=1;i<m+n;i++)
{
    if(m%i==0 && n%i==0)
    {
        j++;
        c[j]=i;
        count++;

    }
}

for(i=0;i<count;i++)

{
    d=d*c[i];
}
printf("the gcd is %d",d);
    return 0;
}
