  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a[]={5,10,15,20};
    int *ptr;
    ptr=&a[1];
    printf("%d,%d",*ptr,*(ptr+2));

  return 0;
}

