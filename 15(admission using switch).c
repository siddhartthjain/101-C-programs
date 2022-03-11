#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    float a;
    int i;
    printf("you want to enter percentage or gpa?\n enter 1 for percentage \n enter 2 for gpa\n ");
scanf("%d",&i);
    switch(i)
{


    case 1:
      {
printf("enter percentage:");
      scanf("%f",&a);
        if(a>=50.0)
            printf("yes you can take admission");
        else
            printf("sorry");
        break;
      }
    case 2:
       {
printf("enter gpa:");
        scanf("%f",&a);
        if(a>=5.0)
        printf("yes you can take addmission");
        else
            printf("sorry");
        break;
       }

        default :
        printf("enter correct value");

}





 return 0;
}
