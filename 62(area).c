 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int area(float,float);
int main()
{
    float a,b;
    printf("enter lentgh and breadth");
    scanf("%f%f",&a,&b);
    area(a,b);


return 0;
}
int area(float a,float b)

{
float c;
c=a*b;
printf("the area is %f",c);

    return 0;
}
