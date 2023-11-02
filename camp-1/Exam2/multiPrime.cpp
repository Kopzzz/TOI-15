#include<stdio.h>
int p[100005];
int k[100005];
main()
{
	int i,j;
	for(i=2;i<50000;i++)
	{
		if(p[i]==0)
		{
			for(j=2*i;j<50000;j+=i)
			{
				p[j]=1;
			}
			for(j=2;j<i;j++)
			{
				if(p[j]==0)
				{
					if(i*j<100005)
					{
						k[i*j]=1;
					}
					else
						break;
				}
			}
			
		}
	}
	
	int K,T;
	scanf("%d",&T);

	for(i=0;i<T;i++)
	{
		scanf("%d",&K);
		for(j=K;j<100006;j++)
		{
			if(k[j]==1)
			{	
				printf("%d\n",j);
				break;
			}
		}
	}

}

