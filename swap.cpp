// to swap the numbers
#include<stdio.h>
#include<math.h>
int main()  
{
	int a;
	scanf("%d",&a);
	int b;
	scanf("%d",&b);
	int p=a;
	a=b;
	b=p;
	printf("%d",a);
	printf("%d",b);
	return 0;
}
