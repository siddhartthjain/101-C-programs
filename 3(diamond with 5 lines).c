#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=3-i;j>0;j--)

            printf("_ ");
            for(k=1;k<=2*i-1;k++)
                printf("* ");
        printf("\n");
    }
    for(i=1;i<3;i++)
    {
        for(j=1;j<=i;j++)
        printf("_ ");
        for(k=5-2*i;k>0;k--)
            printf("* ");
        printf("\n");


    }
    return 0;
}
