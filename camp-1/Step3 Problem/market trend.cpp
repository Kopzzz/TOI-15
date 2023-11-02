#include<stdio.h>
main()
{
	int n,i,d[10000],count=0,j=1,keep[10000],c=0,kept=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&d[i]);
	}
	for(i=0;i<n;i++)
	{
		if(j>1)
		{
			if(d[i]>d[i-1])
			{
				count++;
				keep[c]=count;
				c++;

			}
			else if(d[i]<=d[i-1])
			{
				keep[c]=count;
				count=0;
				c++;
			}
		}
		j++;		
	}
	for(i=0;i<c;i++)
	{
		if(keep[i]>kept)
		kept=keep[i];
	}
		if(kept==0)
		printf("No value increase");
	else
	printf("%d",kept);
}
