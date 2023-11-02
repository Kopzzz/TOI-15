#include<stdio.h>
main()
{
	int r,i,s,b,x,count=0,con=0;
	scanf("%d",&r);
	x=r;
	if(r%2==0||r%2==2)
		printf("error");
	else{
	for(i=1;i<r;i++)
	{
		count++;
		for(b=1;b<i;b++)
		{
			printf(" ");
		}
		if(count>1)
		{
			x-=2;
		}	
		for(s=0;s<x;s++)
		{
			printf("*");
		}
		
		printf("\n");
		if(count>r/2) break;
	}
	x=3;
	for(i=0;i<r;i++)
	{
		con++;
		for(b=r/2;b>i+1;b--)
		{
			printf(" ");
		}
		if(con>1)
		{
			x+=2;
		}	
		for(s=0;s<x;s++)
		{
			printf("*");
		}
		printf("\n");
		if(con>r/2-1) break;
	}
}

		
	
}
