#include<stdio.h>
main()
{
	int n,i,j,sum=0,min=10,max=0;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	if(n==3)
	{
		for(i=0;i<n;i++)
		{
			sum+=s[i];
		}	
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(s[i]<min)
			{
				min=s[i];
			}
			if(s[i]>max)
			{
				max=s[i];
			}
			
		}
		for(i=0;i<n;i++)
		{
			sum+=s[i];
		}
		sum=sum-(min+max);	
			
	}
	printf("%d",sum);
}
