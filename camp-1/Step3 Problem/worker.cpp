#include<stdio.h>
main()
{
	int m=0,k,n,M,N,a,b,i=0,d;
	scanf("%d",&k);
	scanf("%d %d",&M,&N);
	n=k;
	a=m*6;
	b=n*10;
	if(a<M)
	{
		for(d=1;d>0;d++)
		{
			n=k;
			for(m=0;m<k;i++)
			{
				m++;
				n--;
				a=m*6*d;
				b=n*10*d;
				if(a>=M&&b>=N)
					break;	
			}
			if(a>=M&&b>=N)
				break;		
		}
	}
	printf("%d %d",m,n);
}
