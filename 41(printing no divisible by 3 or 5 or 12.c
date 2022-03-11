#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i;
  printf("the no which are divisble by 3 or 5 or 12 are");
for(i=10;i<=500;i++)
{

    if(i%3==0 || i%5==0 || i%12==0)
        printf("%d\t",i);
}


return 0;
}
