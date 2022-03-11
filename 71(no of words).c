  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,count=1,l;
    char a[50];
    printf("enter line ");
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==' ')
        {
            count++;

        }
    }
    printf("the no of words are%d",count);


  return 0;
}

