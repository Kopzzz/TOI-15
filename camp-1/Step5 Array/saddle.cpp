#include<stdio.h>
main()
{
	int  r,c,i,j,x,count=0,min,max,con,row=0,col=0;
	scanf("%d %d",&r,&c);
	int n[r][c],colMAX[10000],colMIN[10000],rowMAX[10000],rowMIN[10000],keep[r*c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	for(row=0;row<r;row++)
	{
		colMAX[row]=0;
		for(j=0;j<c;j++)
		{
			if(n[row][j]>colMAX[row])
			{
				colMAX[row]=n[row][j];
			}
		}
	}

	for(row=0;row<r;row++)
	{
		colMIN[row]=1000000;
		for(j=0;j<c;j++)
		{
			if(n[row][j]<colMIN[row])
			{
				colMIN[row]=n[row][j];
			}	
		}
	}
	for(col=0;col<c;col++)
	{
		rowMAX[col]=0;
		for(j=0;j<r;j++)
		{
			if(n[j][col]>rowMAX[col])
			{
				rowMAX[col]=n[j][col];
			}		
		}
	}
	for(col=0;col<c;col++)
	{
		rowMIN[col]=1000000;
		for(j=0;j<r;j++)
		{
			if(n[j][col]<rowMIN[col])
			{
				rowMIN[col]=n[j][col];
			}		
		}
	}
	for(row=0;row<r;row++)
	{
		for(col=0;col<c;col++)
		{
			if(n[row][col]==rowMAX[col]&&n[row][col]==colMIN[row])
			{
				printf("(%d, %d) = %d\n",row,col,n[row][col]);
				count++;
			}
			if(n[row][col]==rowMIN[col]&&n[row][col]==colMAX[row])
			{
				printf("(%d, %d) = %d\n",row,col,n[row][col]);
				count++;
			}
		}
	}
	if(count==0)
		printf("None");
}
