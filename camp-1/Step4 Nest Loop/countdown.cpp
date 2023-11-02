#include<stdio.h>
main()
{
	int n,i,j,k,l1=0,l2=0,r,c;
	scanf("%d",&n);

		for(j=n;j>0;j--)
		{
			for(i=n;i>j;i--)
			{
				printf(" ");
			}
			if(j>=10)
			{
				for(i=0;i<j;i++)
				{
					printf("%d",j%10);
				}
			}
			else
			{
				for(i=0;i<j;i++)
				{
					printf("%d",j);
				}
			}
			printf("\n");
			
		}
	
}
