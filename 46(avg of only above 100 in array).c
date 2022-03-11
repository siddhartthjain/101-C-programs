 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int a[10],i,j,count=0,b[count],sum=0;
float avg;
printf("enter 10 integers");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);

}
for(i=0;i<10;i++)
{
    if(a[i]>100)
        count++;

}
printf("the no of elements greater than 100 are %d\n",count);
for(i=0;i<10;i++)
{
j=i;
if(a[i]>100)
{
    b[j]=a[i];

}
else

{
    b[j]=0;
}


}



for(j=0;j<10;j++)
{sum=sum+b[j];

}

printf(" sum is %d\n",sum);

avg=(float)sum/count;
printf("average is %f\n\n\n",avg);
return 0;
}
