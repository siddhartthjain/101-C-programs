  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int l,c;
    char a[30],b[30];
    printf("enter 1st string");
    gets(a);
    printf("enter 2nd string");
    gets(b);
    l =strlen(a);
    printf("the lentgh of 1st string is%d\n",l);
    printf("the reverse of 1st string is %s\n",strrev(a));

      printf("the upper  of 1st string is %s\n",strupr(a));
      printf("the concat of strings are %s\n",strcat(a,b));
      c=strcmp(a,b);
      if(c==0)
      {
          printf("they are equal\n");
      }
      else{printf("they are not equal");}


  return 0;
}

