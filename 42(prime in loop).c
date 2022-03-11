#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i,j,n,count=0;
printf("the no you want to get prime:");
scanf("%d",&n);
printf("the primes are");
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
    count++;

        }
     }
      if (count==2)

    printf("%d",i);



}



return 0;
}
