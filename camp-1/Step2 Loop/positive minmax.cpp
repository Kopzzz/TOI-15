#include<stdio.h>
main()
{
	int n[8],i,m[8],max,min;
	for(i=1;i<=8;i++)
	{
		scanf("%d",&n[i]);
		m[i] = n[i];
	}
	for(i=1;i<=8;i++)
	{
		if(n[i]>0)
		{
			max=n[i];
			min=n[i];
		}
	}
		
	for(i=1;i<=8;i++)
	{
		if(n[i]>0)
		{
			if(n[i]>max)
			{
			max=n[i];
			}
			if(n[i]<min)
			{
			min=n[i];
			}		

		}

		
	}
	printf("%d\n%d",max,min);
	
}
