#include<stdio.h>
int get[100000],pay[100000];
int main()
{
	int N,K,aget=0,apay=0,change;
	scanf("%d %d",&N,&K);
	for(int i=0;i<N;i++)
	{
		scanf("%d %d",&get[i],&pay[i]);
	}
	for(int i=0;i<N;i++)
	{
		aget = aget+get[i];
	}
	for(int i=0;i<N;i++)
	{
		apay = apay+pay[i];
	}
	if(aget>apay)
	{
		change = aget - apay;
		printf("Profit ");
		printf("%d\n",change);
		if(change>=K)
		{
			printf("Expand");
		}
		else if(change<K&&change>=K/2)
		{
			printf("Wait and see\n");
			aget=0;	apay=0;
			for(int i=0;i<N;i++)
			{
				scanf("%d %d",&get[i],&pay[i]);
			}
			for(int i=0;i<N;i++)
			{
				aget = aget+get[i];
			}
			for(int i=0;i<N;i++)
			{
				apay = apay+pay[i];
			}
			if(aget>apay)
			{
				change = aget - apay;
				printf("Profit ");
				printf("%d\n",change);
				if(change>=K)
				{
					printf("Expand");
				}
				else if(change<K)
				{
				printf("Not expand");
				}
			}
			else if(apay>aget)
			{
				change = apay - aget;
				printf("Loss ");
				printf("%d\n",change);
				printf("Not expand");
			}
			else if(apay=aget)
			{
				printf("Breakeven\n");
				printf("Not expand");
			}
		}
		else if(change<K)
		{
			printf("Not expand");
		}
	
	}
	else if(apay>aget)
	{
		change = apay - aget;
		printf("Loss ");
		printf("%d\n",change);
		printf("Not expand");
	}
	else if(apay=aget)
	{
		printf("Breakeven\n");
		printf("Not expand");
	}
}

