#include<stdio.h>
main()
{
	int a,b,m,n,A,B,i,d;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&m,&n);
	A=a*6;
	B=b*10;
	if(m>0&&a==0||n>0&&b==0)
		printf("Unable to finish order");
		
	else if(m<=A&&n<=B)
	{		
		printf("1");		
	}
	else if(m<=A)
	{
		if(n%B==0)
		printf("%d",n/B);
		else
		printf("%d",n/B+1);
	}
	else if(n<=B)
	{
		if(m%A==0)
		printf("%d",m/A);
		else
		printf("%d",m/A+1);
	}
	else if (m%A==0&&n%B==0)
	{
		if(m/A>=n/B)
		{
			printf("%d",m/A);
		}
		else if(m/A<=n/B)
		{
			printf("%d",n/B);
		}
	}
	else
	{
		if(m/A>=n/B)
		{
			if(m%A>0)
				printf("%d",m/A+1);
			else
				printf("%d",m/A);
		}
		else if(n/B>m/A)
		{
			if(n%B>0)
				printf("%d",n/B+1);
			else
				printf("%d",n/B);
		}
		
	}	
}
