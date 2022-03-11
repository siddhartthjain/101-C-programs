    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    float a,b,c;
    float A,B,C;
    float pi=acos(-1);
    printf("enter 3 sides");
    scanf("%f%f%f,",&a,&b,&c);
    A=((b*b+c*c)-(a*a))/(2*b*c);
    A=acos(A)*(180/pi);

 B=((c*c+a*a)-(b*b))/(2*a*c);
 B=acos(B)*(180/pi);
    C=180-(A+B);
    printf("the angles are");
    printf("%f\n%f\n%f\n",A,B,C);

    return 0;
}
