    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct product
{

char name[50];
double price;



};
int productinfo(struct product myproduct);
int main()
{
    int i;
  struct  product myproduct[5];
  for(i=0;i<5;i++)
  {


  productinfo( myproduct[i]);
  }


  return 0;
}
int productinfo( struct product myproduct)
{
    printf("enter name");
    scanf("%s",myproduct.name);
    printf("enter price");
    scanf("%e",&myproduct.price);
    printf("%s",myproduct.name);
    printf("%e",myproduct.price);
    return 0;
}
