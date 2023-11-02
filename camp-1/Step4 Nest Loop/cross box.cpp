#include<stdio.h>
main()
{
	int n,i,j,k=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("*");
	}
	printf("\n");
	for(i=0;i<n/2;i++)
	{
		printf("*");
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		printf("*");
		k++;
		for(j=n-4;j>=i+k;j--)
		{
			printf(" ");
		}
		if(i<n/2-1)
			printf("*");
		for(j=i;j>0;j--)
		{
			printf(" ");
		}
		printf("*");		
		printf("\n");
	}
	k=0;
	for(i=0;i<n/2-1;i++)
	{
		
		printf("*");
		for(j=n/2-2;j>i;j--)
		{
			printf(" ");
		}
		printf("*");

		k++;
		for(j=1;j<=i+k;j++)
		{
			printf(" ");
		}
		printf("*");
		for(j=i;j<n/2-2;j++)	
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
		
	}
	for(i=0;i<n;i++)
	{
		printf("*");
	}
}
