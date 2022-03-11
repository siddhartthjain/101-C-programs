 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int converter(int);
int main()
{
    int a;
    printf("enter the money you want to convert(rupees) in us dollar  ");
    scanf("%d",&a);
    printf("  assuming 1us dollar =70.5ruppes");
  converter(a);
return 0;
}
int converter(int a)
{
    float b;
    b=a/70.5;
    printf("50
           \n\n%f",b);



    return 0;
}
