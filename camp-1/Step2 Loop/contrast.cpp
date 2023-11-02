#include<stdio.h>
main()
{
	long int m,n,i=1,j,a[1000000],b[1000000],c[1000000],r;
	scanf("%ld %ld",&m,&n);
	
	a[1]=3;
	b[1]=1;
	r=3;
	for(i=2;i<1000000;i++)
	{	
		a[i]=a[i-1]+b[i-1];
		b[i]=a[i-1]-b[i-1];
		c[i]=a[i]*b[i];
		r=r+c[i];
		if(a[i]==m&&b[i]==n) break;
	}
	printf("%ld",r);	
	
}
