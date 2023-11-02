#include<stdio.h>
main()
{
	int i,j,n,k,min,count=0;
	struct fighter
	{
		char name[31];
		int s;
	};
	 fighter f[9];
	 
	 for(i=1;i<9;i++)
	{
		f[i].s=0;
	}
	for(i=1;i<9;i++)
	{
		scanf("%s",&f[i].name);
	}
		
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		for(j=1;j<9;j++)
		{
			if(k==j)
			{
				f[j].s++;
			}
		}
	}
	
	min=f[1].s;
	
	for(i=1;i<9;i++)
	{
		if(f[i].s<min)
		{
			min=f[i].s;
		}
	}
	for(i=1;i<9;i++)
	{
		if(f[i].s>min)
		{
			printf("%s\n",f[i].name);
		}
	}		
}

