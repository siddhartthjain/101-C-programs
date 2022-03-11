  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i;
    int*pa,**pb;
    i=500;
    pa=&i;
    pb= &pa;
    printf(" the addres%d",pa);
    printf(" i is %d\n",*pa);
    printf("hor %d\n",*pb);

  return 0;
}

