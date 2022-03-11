#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int x,y;
printf("enter cood:");
scanf("%d,%d",&x,&y);
if(x>0)
{
    if(y<0)
        printf("its 4 th quadrant");
    if(y>0)
        printf("its 1st quadrant");
}
 else if(x<0)
{
    if(y<0)
        printf("its 3rd quadrant");

    if(y>0)
        printf("its 2nd quadrant");
}
return 0;
}
