    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct info
    {
        char name[50];
        int id;
        char gender;
    };
int main()
{
    struct info b;

    printf("enter name");
  scanf("%s",b.name);
    printf("enter  id ");
    scanf("%d",&b.id);
    printf("enter gender");
    scanf("%c",&b.gender);

    printf("you enterd \n");
    printf("%s",b.name);
    printf("\n%d",b.id);
    printf("\n%d",b.gender);

  return 0;
}
