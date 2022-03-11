#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

int i,j;
for(i=1;i<=6;i++)
{
     if(i%2==0)
           {

            printf("blank line\n");
            continue;
           }
    for(j=1;j<=i;j++)
    {




            printf("* ");
    }
    printf("\n");
}
return 0;
}
