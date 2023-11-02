#include<stdio.h>
main()
{
	int x,y,x1,y1,x2,y2,x3,y3,m,n;
	scanf("%d %d",&x,&y);
	scanf("%d %d",&m,&n);
	x1 = m*2;
	y1 = m*6;
	x2 = n;
	y2 = n*4;
	x3 = x1+x2;
	y3 = y1+y2;
	if(x>=x3&&y>=y3)
	{
		printf("Yes %d %d",x-x3,y-y3);
	}
	else if (x<x3&&y>=y3)
	{
		printf("No %d %d",x3-x,0);
	}
	else if (x>=x3&&y<y3)
	{
		printf("No %d %d",0,y3-y);
	}
	else if (x<x3&&y<y3)
	{
		printf("No %d %d",x3-x,y3-y);
	}
	
	
	
	
	
}
