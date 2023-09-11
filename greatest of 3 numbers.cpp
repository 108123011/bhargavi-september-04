#include<stdio.h>
#include<math.h>
int main ()
{
	 int a,b,c;
	 scanf("%d %d %d",&a,&b,&c);
	 if(a>b&&a>c)
	     printf("a is greatest");
	 else if(b>c)
	     printf("bis greatest");
	 else
	     printf("c is greatest");
	     return 0;
}
