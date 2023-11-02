#include<stdio.h>
main()
{
	int N,i,j,x,c=0;
	scanf("%d",&N);
	int n[N],k[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&n[i]);
	}
	scanf("%d",&x);
	for(i=0;i<N;i++)
	{
		k[i]=0;
		if(n[i]==x)
		k[i]=i+1;
	}
	for(i=0;i<N;i++)
	{
		if(k[i]!=0)
		{
		
		printf("%d ",k[i]);
		c++;
		}
	}
	if(c==0)
	printf("0");
	
	
}
