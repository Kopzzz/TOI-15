#include<stdio.h>
main()
{
	struct std
	{
		char n[15];
		int s;
	};
	std std[2000];
	
	int n,i,j,sum=0,t,score,min=11,max,max2;
	scanf("%d %d",&n,&t);
	int keep[n];
	
	for(i=0;i<n;i++)
	{
		min=11;
		scanf("%s",&std[i].n);
		for(j=0;j<t;j++)
		{
			scanf("%d",&score);
			std[i].s+=score;
			
			if(score<min)
			{
				min=score;
			}
		}	
		std[i].s-=min;
	}
	max=0;
	for(i=0;i<n;i++)
	{
		if(std[i].s>max)
		{
			max=std[i].s;
		}
		
	}

	printf("%d\n",max);
	for(i=0;i<n;i++)
	{
		if(std[i].s==max)
		printf("%s\n",std[i].n);
	}
}
/*
6 3
07551234AB 9 8 7
07550234AC 3 5 4
09550234AD 5 9 9
07550012AE 0 5 3
07550103AF 10 7 7
07550155AG 6 10 8

5 4
07551234AB 9 8 7 8
07550234AC 3 5 4 2
09550234AD 7 7 9 9
07550012AE 0 5 3 8
07550103AF 10 7 7 8
*/

