#include<stdio.h>
main()
{
	int n,s,m,i,k,j,e;
	scanf("%d",&n);
	k = 1;
	e = 0;
	j = n/2+2;
	for(i=0;i<=n;i++)
	{
		j--;
		e++;
		for(m=j;m>1;m--)
		{
			printf("-");
		}
		if(i==1)
			k=i+2;
		else if(i>1)
			k=i+e;
			
		for(s=1;s<=k;s++)
		{
			printf("*");
		}
	
		for(m=j;m>1;m--)
		{
			printf("-");
		}
	
		printf("\n");
		if(i>n/2-1) break;
	}
	
	for(i=n/2;i>0;i--)
	{
		
		for(m=n/2;m>=i;m--)
		{
			printf("-");
		}
		for(s=1;s<i*2;s++)
		{
			printf("*");
		}
		
		for(m=n/2;m>=i;m--)
		{
			printf("-");
		}
		printf("\n");
	}
	
}
