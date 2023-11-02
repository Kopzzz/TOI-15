#include<stdio.h>
main()
{
	int n=0,cost,i,num[10],x,pro,profit,c=0,p=0;
	scanf("%d",&x);
	for(i=0;i<7;i++)
	{
		scanf("%d",&num[i]);
		n+=num[i];	
	}
		if(n<=100)
		{
			cost=n*80;
		}
		else if(n<=250)
		{
			cost=(n-100)*70+8000;
		}
		else if(n>250)
		{
			cost=(n-250)*60+18500;
		}
		pro=n*x;
		p+=pro;
		profit=p-cost;	
		
	printf("%d\n",cost);
	printf("%d\n",p);
	if(profit<=0)
		printf("No Profit");
	else
		printf("%d\n",profit);
}
