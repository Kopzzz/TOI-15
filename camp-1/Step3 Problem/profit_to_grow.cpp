#include<stdio.h>
main()
{
	int n,k,i,in,out,r=0,c;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&in,&out);
		c=in-out;	
		r+=c;		
	}
	if(r>0)
	{
		printf("Profit %d\n",r);
		if(r>=k)
		{
			printf("Expand");
		}
		else if (r>=k/2)
		{
			printf("Wait and see\n");
			r=0;
			for(i=0;i<n;i++)
			{
				scanf("%d %d",&in,&out);
				c=in-out;	
				r+=c;		
			}
			if(r>0)
			{
				printf("Profit %d\n",r);
				if(r>=k)
				{
					printf("Expand");
				}		
				else
				{
					printf("Not expand");
				}
			}
			else if(r<0)
			{
			printf("Loss %d\n",-r);
			printf("Not expand");
			}
			else if(r==0)
			{
				printf("Breakeven\n");
				printf("Not expand");
			}
			
		}
	}
	else if(r<0)
	{
		printf("Loss %d\n",-r);
		printf("Not expand");
	}
	else if(r==0)
	{
		printf("Breakeven\n");
		printf("Not expand");
	}		
}
