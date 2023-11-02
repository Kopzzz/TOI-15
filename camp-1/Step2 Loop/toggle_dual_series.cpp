#include<stdio.h>
main()
{
	long int i,m,n,a[100000],b[100000],j,sum1=-2,sum2=-1,c;
	scanf("%ld %ld",&m,&n);
	a[0]=1;
	b[0]=1;
	
	for(i=1;i<100000;i++)
	{
		a[i]=a[i-1]+2;
		if(a[i]==m) break;
	}

	for(j=1;j<100000;j++)
	{
		b[j]=b[j-1]*2;
		if(b[j]==n) break;
	}

 	if (i==1)
	sum1=-2;
	
	for(c=2;c<=i;c++)
	{
		if(c%2==0)
		sum1=sum1+a[c];
		else if (c%2==1)
		sum1=sum1-a[c];
	}
	 if (j==1)
	sum2=-1;	
	for(c=2;c<=j;c++)
	{
		if(c%2==0)
		sum2=sum2+b[c];
		else if (c%2==1)
		sum2=sum2-b[c];
	}

	printf("%ld",sum1*sum2);
}
