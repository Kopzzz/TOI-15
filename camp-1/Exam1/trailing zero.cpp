#include<stdio.h>
main()
{
	int n,sum;
	scanf("%d",&n);
	n=n/5;
	sum=n;
	while(n>0)
	{
		n=n/5;
		sum+=n;
	}
	printf("%d",sum);
}

