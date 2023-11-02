#include<stdio.h>
long long int a,b,c,d,e,f;
main()
{
	scanf("%lld %lld",&a,&b);
	e = a;
	f = b;
	while(b!=0)
	{
		c=b;
		b=a%b;
		a=c;
	}	
	d = e*f/a;
	printf("%lld",d);
	
}
