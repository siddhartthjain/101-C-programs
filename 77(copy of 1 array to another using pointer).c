    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a[5],b[5],i;
    int *p;
    printf("enter 5 integers");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<5;i++)
    {
      b[i]=*p;
        p++;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }


  return 0;
}
