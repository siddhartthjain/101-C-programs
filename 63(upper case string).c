  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int upper(char a[20]);
int main()
{
   char a[20];
   printf("enter a line ");
   gets(a);
   upper(a);

return 0;
}
int upper(char a[20])

{
char  i,c[20];

for(i=0;a[i]!='\0';i++)
{
    if(a[i]>='a' && a[i]<='z' && a[i]!=32)
    {c[i]=a[i]-32;}

}
printf("%s",c);

    return 0;
}
