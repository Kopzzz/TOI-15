#include<stdio.h>
main()
{
	double h,w,a;
	scanf("%lf %lf",&w,&h);
	if (w<=0&&h<=0)
	printf("invalid width and height");
	else if (w<=0)
	printf("invalid width");
	else if (h<=0)
	printf("invalid height");
	else
	{
		a=w*h;
		printf("%.2lf",a);
	}
}
