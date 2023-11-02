#include<stdio.h>
main()
{
	float a,b,c,r;
	scanf("%f %f %f",&a,&b,&c);
	if(c==0)
	printf("cannot divide by zero");
	else
	{
		r=(a+b)/c;
		printf("%f",r);
		
	}
}
