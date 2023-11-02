#include<stdio.h>
int d[1000000];
main()
{
	int p,i,j,odd,even,count=0;
	scanf("%d",&p);
	odd=p;
	even=p;

	for(i=0;i<p*2;i++)
	{
		scanf("%d",&d[i]);
		count++;
		if(odd<=0||even<=0)
		{
			break;
		}
		if(d[i]%2==0)
		{
			if(count>2)
			{
				if(d[i-1]%2==0&&d[i-2]%2==0)
				{
					odd-=3;
				}
				else
					odd-=1;
			}
			else
			odd-=1;
			
		}
		else
		{
			if(count>2)
			{
				if(d[i-1]%2==1&&d[i-2]%2==1)
				{
					even-=3;
				}
				else
					even-=1;
			}
			else
			even-=1;
		
		}

	}
	if(odd<=0)
	{
		printf("0\n%d",d[i-1]);
	}
	else
	{
		printf("1\n%d",d[i-1]);
	}
}
