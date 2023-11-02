#include<stdio.h>
main()
{
	long int log1,wood1,log2,wood2,m,n;
	scanf("%ld %ld",&m,&n);
	wood1=m*2;
	log1=m*6;
	wood2=n;
	log2=n*4;
	printf("%ld %ld",wood1+wood2,log1+log2);
}
