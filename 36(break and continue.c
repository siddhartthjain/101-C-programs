#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int i;
for(i=10;i<=20;i++)
  {


    if(i%2==0)
    continue;
printf("%d",i);
if(i>16)
    break;
  }

return 0;
}
