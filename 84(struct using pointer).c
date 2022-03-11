    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct tennisball
{
    char color[50];
    float weight;


};
int main()
{
    struct tennisball *myball;
    struct tennisball ball;
    myball =&ball;
    printf("enter color");
    scanf("%s ",ball.color);

    printf("enter weight");
    scanf("%f ",&ball.weight);
    printf("values\n");
    printf("%s",myball->color);
    printf("%f\n",myball->weight);


  return 0;
}
