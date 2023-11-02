#include<stdio.h>
main()
{
	long long int n;
	scanf("%lld",&n);
	if(n%2==0||n%2==2)
	printf("Even");
	else if(n%2==1)
	printf("Odd");
}
