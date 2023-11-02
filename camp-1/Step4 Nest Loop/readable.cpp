#include<stdio.h>
main()
{
	int n,i,j;
	for(i=0;i<1;i--)
	{
		scanf("%d",&n);
		if(n<=0) break;
		for(i=0;i<n;i++)
		{	
			if(n<10)
			{
				if(i==n-1)
					printf("%d",n);
				else if(i+1==5)
					printf("X");
				else
					printf("*");	
			}
			else
			{
				if(i==n-1)
					printf("%d",n%10);
				else if((i+1)%5==0)
					printf("X");
				else
				printf("*");
			}
		}
		printf("\n");
		i=0;
	}
}
