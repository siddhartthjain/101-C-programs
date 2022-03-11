 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int absolute(float);
int main()
{
    float a;
    printf("enter any real no");
    scanf("%f",&a);
    absolute(a);


return 0;
}
int absolute(float a)

{
float b;
if(a<0)
{
    b=-1*a;
    printf("%f",b);
}
else if(a>=0)
    printf("%f",a);

    return 0;
}
