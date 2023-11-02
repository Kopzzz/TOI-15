#include<stdio.h>
int d[1000000];
main()
{
	int i,n,count=0,p=0,m=0;
	for(i=0;i<1000000;i++)
	{
		scanf("%d",&d[i]);
		if(d[i]==0)
			break;
		count++;
		if(count>=3)
		{		
			if(d[i-2]<=d[i]&&d[i]<d[i-1]||d[i]<=d[i-2]&&d[i-2]<d[i-1])
			{
				m++;
			}
			else if(d[i-1]<d[i]&&d[i]<=d[i-2]||d[i]>=d[i-2]&&d[i-2]>d[i-1])
			{
				p++;
			}
		}	
	}
	printf("%d\n%d",m,p);
}
