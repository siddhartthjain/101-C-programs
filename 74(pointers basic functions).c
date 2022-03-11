  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a,*ptr;
    a=5;
    ptr=&a;
    printf("%d\n",*ptr);
    printf("address %d\n",ptr );

  return 0;
}

