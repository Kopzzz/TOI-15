#include<stdio.h>

int p[6000001];
main()
{
	int i,j,count=0,n;
	for(i=2;i<6000001;i++)
	{
		if(p[i]==0)
		{
			for(j=2*i;j<6000001;j+=i)
			{
				p[j]=1;
			}
		}
	}
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(p[i]==0)
		{
			count++;
		}
	}
	printf("%d",count);
}
