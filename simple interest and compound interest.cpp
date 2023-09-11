#include<stdio.h>
#include<math.h>
int main()
{
	 int p,t,r,n,c,s;
	 scanf("%d %d %d %d",&p,&t,&r,&n);
	 s=(p*t*r)/100;
	 c=p*pow(1+(r/t),n);
	 printf("%d",c);
	 printf("%d",s);
	 return 0;
}
