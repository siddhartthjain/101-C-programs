#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char a;
    printf("enter char in small");
    scanf("%c",&a);
    if('a'<=a && a<='z')
    {

        printf("%c", a-32);
    }
    else
    {
        printf("plzz enter in small chararcter");
    }

 return 0;
}
