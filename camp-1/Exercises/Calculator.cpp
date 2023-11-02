#include<stdio.h>
main()
{
	double a,b,c,sum;
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("%lf %lf %lf %lf\n",a,b,c,a+b);
	sum=a+b;
	if(sum==c)
		printf("Correct");
	else
		printf("Wrong");
}
