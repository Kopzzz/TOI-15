#include<stdio.h>
main()
{
	int x,y,n[10],i,sum=0,count=0;
	scanf("%d %d",&x,&y);
	for(i=1;i<=8;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=1;i<=8;i++)
	{	
		if(y>=n[i]&&n[i]>=x)
		{
			sum+=n[i];
		}
		else
		{
		 	count++;
		}
	}
	if(count==8)
		printf("None"); 
	else
	{
		printf("%d",sum);
	}
	
}
