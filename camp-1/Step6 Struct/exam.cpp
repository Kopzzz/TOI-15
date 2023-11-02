#include<stdio.h>
main()
{
	struct std
	{
		char n[6];
		int s;
	};
	std std[10000];
	int n,i,j,sum=0,av,count=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&std[i].n,&std[i].s);
	}
	for(i=0;i<n;i++)
	{
		sum+=std[i].s;
	}
	av=sum/n;
	for(i=0;i<n;i++)
	{
		if(std[i].s>av)
		{
			count++;
		}
		
	}
	printf("%d\n",count);
	for(i=0;i<n;i++)
	{
		if(std[i].s>av)
		{
			printf("%s\n",std[i].n);
		}
		
	}

	
}

