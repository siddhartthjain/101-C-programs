#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,count=0;

    for(i=50000;i>=10000;i--)
    {

count=0;

        for(j=1;j<=i;j++)
    {
        if(i%j==0)
            count++;


    }
    if(count==2)
    {
        printf("%d\n",i);
        break;
    }
    }
    printf("hello");


    return 0;
}
