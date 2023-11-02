#include<stdio.h>

main()
{
	long long int a,b,c;
	scanf("%lld %lld",&a,&b);
	while(b!=0)
	{
		c=b;
		b=a%b;
		a=c;
	}	
	printf("%lld",a);
}
