#include<stdio.h>
main()
{
	int n,p[20000],i,v[20000],s1=20000,s2=20000;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&v[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(v[i]<=s1)
		{
			s1-=v[i];
			printf("1\n");
		}
		else if(v[i]<=s2)
		{
			s2-=v[i];
			printf("2\n");
		}
		else
			printf("0\n");
	}
}
