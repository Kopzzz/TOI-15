#include<stdio.h>
main()
{
	int n[10],N,i,j;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=N-1;i>=0;i--)
	{
		for(j=N;j>i;j--)
		{
			printf("%d",n[i]);
		}
		printf("\n");
	}
	
	
}
