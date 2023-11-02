#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a>b)
	{
		if(b>c)
			printf("%d %d %d",c,b,a);
		else if(c>a)
			printf("%d %d %d",b,a,c);
		else 
			printf("%d %d %d",b,c,a);
	}
	else if(a<b)
	{
		if(a>c)
			printf("%d %d %d",c,a,b);
		else if(c>b)
			printf("%d %d %d",a,b,c);
		else 
			printf("%d %d %d",a,c,b);
	}
}
