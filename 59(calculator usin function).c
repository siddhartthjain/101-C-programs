 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int add(int ,int);
int sub(int ,int);
int divide(int ,int);
int multi(int ,int);
int main()
{
    int a,b,c;
    printf("enter two nos.");
    scanf("%d%d",&a,&b);
    printf("enter 1 to add\n" );
    printf("enter 2 to sub\n" );
    printf("enter 3 to divide\n" );
    printf("enter 4 to multi\n" );
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        {
            add(a,b);
            break;
        }
        case 2:
        {
            sub(a,b);
            break;
        }
        case 3:
        {
            divide(a,b);
            break;
        }
        case 4:
        {
            multi(a,b);
            break;
        }
        default:
            {
                printf("enter correct no.");
            }
    }
    return 0;
}
int add(int a , int b)
{
int c;
c=a+b;
printf("%d",c);
return 0;
}
int sub(int a , int b)
{
int c;
c=a-b;
printf("%d",c);
return 0;
}
int divide(int a , int b)
{
float c;
c=(float)a/b;
printf("%f",c);
return 0;
}
int multi(int a , int b)
{
int c;
c=a*b;
printf("%d",c);
return 0;
}
