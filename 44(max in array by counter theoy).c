 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{int i,a[10],count=0,j;
    printf("enter 10 elements:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
    count=0;
        for(j=0;j<=9;j++)
            if(a[i]>=a[j])
        {
            count++;
        }
        if(count==10)
        {
            printf("the greatest is %d\n",a[i]);
            printf("the index is%d\n",i+1);
        }

    }
return 0;
}
