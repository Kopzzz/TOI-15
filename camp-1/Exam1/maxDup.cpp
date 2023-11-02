#include<stdio.h>
main()
{
	long int N,n[500],i,j,c=0,keep[500],count[500],max=0,maxC=0,keep2[500],k=0;
	scanf("%ld",&N);
	for(i=0;i<N;i++)
	{
		scanf("%ld",&n[i]);
	}
	for(i=0;i<N;i++)
	{
		keep2[i]=0;
		keep[i]=0;
		count[i]=1;
	}
	for(i=0;i<N;i++)
	{
		k=0;
		for(j=0;j<=N;j++)
		{
			if(n[i]==keep[j])
			{
				count[j]++;
				k++;
				break;
			}
			
		}
		if(k==0)
		{
		for(j=0;j<=N;j++)
		{
			if(n[i]==n[i+1+j])
			{
				keep[c]=n[i];
				c++;
				break;
			
			}	
		}
		}
	
	}
	for(i=0;i<N;i++)
	{
		if(count[i]>=maxC)
		{
			maxC=count[i];
		}		
	}
	for(i=0;i<N;i++)
	{
		if(count[i]==maxC)
		{
			keep2[i]=keep[i];
		}
	}
	

	for(i=0;i<N;i++)
	{
		if(keep2[i]>=max)
		{
			max=keep2[i];
		}
	}
	printf("%ld\n%ld",max,maxC);
	
	
}
