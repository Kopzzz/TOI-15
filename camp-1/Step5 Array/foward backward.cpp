#include<stdio.h>
int n[10000];
main()
{
	int N,i,M,j;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&n[i]);
	}
	scanf("%d",&M);
	if(M>0)
	{
		for(i=0;i<N;i++)
		{
			n[i]=n[i]+M;
			printf("%d ",n[i]);
		}
	}
	else
	{
		for(i=N-1;i>=0;i--)
		{
			n[i]=n[i]+M;
			printf("%d ",n[i]);
		}
	}
}
