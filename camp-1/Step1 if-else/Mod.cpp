#include<stdio.h>
main()
{
	int a,mod;
	scanf("%d",&a);
	do
	{
		if (a==0)
			break;
		else if(a%3==0&&a%5==0)
			printf("3 5");
		else if(a%3==0)
			printf("3");
		else if(a%5==0)
			printf("5");
	}while(a-a==a);
}
