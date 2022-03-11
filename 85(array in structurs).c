    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct author
{
    char name[50];
    char genre[50];



};
int main()
{
    struct author info[5];
    int i;
    printf("enter 5names and genre of 5novels");
    for(i=0;i<5;i++)
    {
        scanf("%s",info[i].name);
        scanf("%s",info[i].genre);
    }
     for(i=0;i<5;i++)
    {
        printf("%s\n",info[i].name);
        printf("%s\n",info[i].genre);
    }


  return 0;
}
