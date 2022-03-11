    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[5][50],b[67];
    int i;

    printf("enter 5 namrs");
for(i=0;i<5;i++)
  {
      scanf("%s",a[i]);


  }

  for(i=0;i<5;i++)
  {
   if(strcmp(a[i],a[i+1])>0)
   {
        if(i==4)
        {
            continue;
        }
       strcpy(b,a[i]);
       strcpy(a[i],a[i+1]);
       strcpy(a[i+1],b);

   }
  }
  for(i=0;i<5;i++)
  {
      puts(a[i]);

  }

  return 0;
}
