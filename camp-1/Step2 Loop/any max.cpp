#include<stdio.h>
main()
{
	int n[10000],i,j=1,keep[10000],con=1,keep2[10000],max,count=0,max2;
	n[0]=0;
	for(i=1;i<10000;i++)
	{
		scanf("%d",&n[i]);
		if (n[i]==0) break;
		else if(n[i]==n[i-1])
		{
			con++;
			keep[j]=con;
			keep2[j]=n[i];
		}
		else if(n[i]!=n[i-1])
		{
			con=1;
			j++;
		}
	}
	max=1;
	max2=n[1];
	for(i=1;i<j;i++)
	{
		if(keep[i]>max)
		{
			max=keep[i];
			max2=keep2[i];
		}
	}
	
	printf("%d\n",max);
	printf("%d",max2);
}
