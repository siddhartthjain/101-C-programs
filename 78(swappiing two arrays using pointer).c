    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a[5],b[5],i;
    int *p,*p2,c;
    printf("enter 5 integers");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    printf("enter integers in array 2");
 for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    p2=b;
    for(i=0;i<5;i++)
    {
        c=*p;
        *p=*p2;
        *p2=c;
        p++;
        p2++;

    }
    printf("printing a\n");
     for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }

    printf("printing b");
     for(i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }

  return 0;
}
