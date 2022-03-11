  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,l,count=0,count1=0;
    char a[10];
    printf("enter char");
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        count=0;
        count1=0;
        for(j=0;j<l;j++)
        {

            if(a[i+1]==a[i-j])
            {
                count1++;

            }
            if(count1==0)



            if(a[i]==a[j])
                count++;

        }
        if(count>0)
        printf("\n%c  has come %d time\n",a[i],count);
    }

  return 0;
}

