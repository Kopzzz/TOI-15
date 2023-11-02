#include<stdio.h>
/*
int a,b,c,d,e,f,g;
main()
{
	scanf("%d",&a);
	e = 1;
	f = 1;
	for(b=1;b<=a;b++)
	{
		for(g=1;g<=a;g++)
		{
			for(c=a;c>=b-1;c--)
			{
			printf("-");
			}
			for(d=1;d<=e;d++)
			{
			printf("*");
			}			
			for(c=a;c>=b-1;c--)
			{
			printf("-");
			}
		}
			
		
		f++;
		e = b+f;
		printf("\n");
	}
}
*/


int a,b,c,d,e,f;
main()
{
	scanf("%d",&a);
	f=1;
	e=1;
	for(b=1;b<=a;b++)
	{
		for(c=a;c>=b;c--)
		{
			printf(" ");
		}
		for (d=1;d<=e;d++)
		{
			printf("*");
			
		}
		f++;
		e = b+f;
		printf("\n");
	}
	e = e-2;
	f = f-3;
	for(b=a;b>=1;b--)
	{
		for(c=a;c>=b;c--)
		{
			printf(" ");
		}
		for (d=e;d>=1;d--)
		{
			printf("*");
			
		}
		f--;
		e = b+f;
		printf("\n");
	}
}



