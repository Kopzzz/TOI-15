#include <stdio.h>
main()
{
	long int n;
	scanf("%ld",&n);
	long int num[n],max,min,i;
	
	for(i=0;i<n;i++)
	{
		scanf("%ld",&num[i]);
	}
		max=num[0];
		min=num[0];
			
	for(i=0;i<n;i++)
	{		
		if(num[i]>max)
		{
			max = num[i];
		}
		else if(num[i]<min)
		{
			min = num[i];
		}
	}
		printf("%ld\n",max);
		printf("%ld",min);
	
}
