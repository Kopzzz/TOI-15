#include<stdio.h>
main()
{
	int n,r,c,i,j=-1,a;
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		if(r<=n/2)
		{
			for(a=0;a<r;a++)
			{
				printf("A");
			}
			for(a=n/2+1;a>r;a--)
			{
				printf("1");
			}
			
		}
		else if(r==n/2+1)
		{
			for(a=0;a<r;a++)
			{
				printf("A");
			}
		}
		else
		{
			for(a=n;a>=r;a--)
			{
				printf("A");
			}
			for(a=r;a>n/2+1;a--)
			{
				printf("*");
			}
			
			
		}

		printf("\n");
	}
}
