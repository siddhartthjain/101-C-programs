  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,l=0,count=0;
    char a[7],b[l-1];
    printf("enter char");
gets(a);
l=strlen(a);

for(i=0;i<l;i++)
{
    b[i]=a[l-1-i];
}
for(i=0;i<l;i++)
{
    printf("%c",b[i]);
}
for(i=0;i<l;i++)
{

    if(b[i]==a[i])
    {
        count++;

    }
}
if(count==l)
{
    printf("\nits palindrome");
}
else
{
    printf("\nits not palindrome");
}

  return 0;
}

