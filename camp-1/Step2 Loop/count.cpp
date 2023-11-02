#include<stdio.h>
main()
{
	int x,y,n[10],i,sum=0,count=8;
	scanf("%d %d",&x,&y);
	for(i=1;i<=8;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=1;i<=8;i++)
	{	
		if(x>=n[i]&&n[i]>=y)
		{
			count++;
			count--;
		}
		else if(y>=n[i]&&n[i]>=x)
		{
			count++;
			count--;
		}
		else
		{
		 	count--;
		}
	}
	if(count==0)
		printf("None"); 
	else
	{
		printf("%d",count);
	}
	
}
