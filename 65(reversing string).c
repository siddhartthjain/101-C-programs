  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,lntgh=0;
char a[20],b[lntgh-1];

printf("enter name ");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
    lntgh++;
}
printf("the length is %d\n",lntgh);
for(i=0;a[i]!='\0';i++)
{
    b[i]=a[lntgh-1-i];
}

for(i=0;i<lntgh;i++)
{
    printf("%c",b[i]);
}
    return 0;
}

