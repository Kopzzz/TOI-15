#include<stdio.h>
main()
{
	long long int h[100000],e[100000],sum,d,x,n,b,a,y,z[100000];
	scanf("%lld",&n);

	if(n>1)
{	
	for(a=1;a<=n;a++)
	{
		scanf("%lld",&h[a]);
		z[a] = h[a];
	}
	
		for(a=1;a<n;a++)
	{
		h[a+1]=h[a] + h[a+1];
		sum = h[a+1];
	}

	for(a=1;a<=n;a++)
	{
		while(h[a+1]!=0)
		{
			x=h[a+1];
			h[a+1]=h[a]%h[a+1];
			h[a]=x;
		}
		d = h[a];
	 	h[a+1] = d;
	}
		

	printf("%lld",sum/d);
}
	else
	{
		scanf("%lld",z);
		printf("1");
	}

}
