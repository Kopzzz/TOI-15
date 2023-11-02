#include<stdio.h>
main()
{
	int i,k,j,x,y,r,c,a,b,m[101][101];
	scanf("%d %d",&r,&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			m[i][j]=0;
		}
	}
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d %d",&a,&b);
		for(x=1;x<=r;x++)
		{
			for(y=1;y<=c;y++)
			{
				if(x==a&&y==b)
				m[x][y]=i;
			}
		}
		
	}
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}
