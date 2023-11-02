#include<stdio.h>
main()
{
	int x,n[10000],count=0,i,con=1,keep[100],j=1,max;
	scanf("%d",&x);
	n[0]=0;
	
	for(i=1;i<10000;i++)
	{
		scanf("%d",&n[i]);
		if(n[i]==0)	break;
		else if(n[i]==x)
		{
			count++;
			if(n[i]==n[i-1])
				{
					con++;
					keep[j]=con;			
				}
		}
		else if(n[i]!=n[i-1])
			{
				j++;
				con=1;
			}
	}
	max=0;
	for(i=1;i<j;i++)
	{
		if(keep[i]>max)
			max=keep[i];
	}
	printf("%d\n",max);
	
	printf("%d",count);
}
