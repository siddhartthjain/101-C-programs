    #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{int x1,x2,y1,y2;
float dis;
printf("enter x coods");
scanf("%d,%d",&x1,&x2);
printf("enter y coods");
scanf("%d,%d",&y1,&y2);
dis=pow(pow((x2-x1),2)+pow((y2-y1),2),0.5);
printf(" the dis bw thse cood are %f",dis);


    return 0;
}
