#include<stdio.h>
main()
{
	int j,n,s,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("*");
	}
	printf("\n");
	printf("*");
	for(i=0;i<n-2;i++)
	{
		printf(" ");
	}
	printf("*\n");
	for(i=0;i<n-4;i++)
	{
		printf("*");
		printf(" ");
		for(j=0;j<n-4;j++)
		{
			printf("*");
		}
		printf(" ");
		printf("*");
		printf("\n");
	}
	printf("*");
	for(i=0;i<n-2;i++)
	{
		printf(" ");
	}
	printf("*\n");
	for(i=0;i<n;i++)
	{
		printf("*");
	}
	
}
