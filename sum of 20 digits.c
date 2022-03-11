#include<stdio.h>
int main()
{
    char a[20],b[20];
    int no1[20],no2[20],i;
    printf("enter 20 digits no");
    scanf("%s",a);
    scanf("%s",b);
    printf("%c\n",a[1]);
    for(i=0;i<20;i++)
    {
        no1[i]=(a[i]-'0');
        no2[i]=(b[i]-'0');
    }
    printf("the nnos are \n");
    for(i=0;i<20;i++)
    {
        printf("%d",no1[i]);
    }
    printf("\n");
    for(i=0;i<20;i++)
    {
        printf("%d",no2[i]);
    }

}
