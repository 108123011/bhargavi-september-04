#include<stdio.h>
#include<math.h>
int main()
{   
     int a,b,c,d;
     printf("enter value in km");
     scanf("%d",&a);
     b=a*1000;
     c=a*100000;
     d=c*10;
     printf("the value in meter is %d\n",b);
     printf("the value in centimeter is %d\n",c);
     printf("the value in millimeter is %d\n",d);
     return 0;
}
