    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
float food;
scanf("%f",&food);
int day=0;
while(food>1)
{
    food=food/2;
    day++;
}
printf("the dog will eat upto");
printf("%d",day);
    return 0;
}
