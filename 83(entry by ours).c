    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct books
{
    int id;
    char title[50];
    char author[50];

};
int main()
{
    struct books b1={1,"let us c","yashwanant"};
    struct books b2={2,"ansi c","balaguruswamy"};
    printf("%d %s %s ",b1.id,b1.title,b1.author);
    printf("\n%d %s %s ",b2.id,b2.title,b2.author);


  return 0;
}
