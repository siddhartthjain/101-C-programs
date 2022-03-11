    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{int i,n,count=0;
    printf("enter any no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("yes its is prime");
    }
    else
    {
        printf("its not prime");
    }

    return 0;
}
