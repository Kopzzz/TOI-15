#include<stdio.h>
main()
{
	int r,c,i,j,a,b;
	scanf("%d %d",&r,&c);
	for(i=0;i<=r;i++)
	{
		for(j=0;j<=c;j++)
		{
			printf("(%d, %d) ",i,j);
		}
		printf("\n");
	}
}
