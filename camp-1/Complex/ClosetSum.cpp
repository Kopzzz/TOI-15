#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	long int K,N,i,j,count,x=0,y=0,f,s,cls=1000000000,min=100000000;
	scanf("%ld %d",&K,&N);
	long int n[N],keep[N];
	
	for(i=0;i<N;i++)
	{
		scanf("%ld",&n[i]);	
	}
	for(i=0;i<N;i++)
	{

		count=0;
		for(j=i+1;j<N;j++)
		{
			if(n[i]==n[j])
			{
				count++;
			}
		}
		if(count==0)
		{
			keep[x]=n[i];
			x++;
		}
	}
	long int m,fk[x],sk[x];
	
	for(i=0;i<x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			m=K-(keep[i]+keep[j]);
			m=abs(m);
			
			if(m<cls)
			{
				cls=m;

			}

		}
		
	}

	for(i=0;i<=x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			if(abs(keep[i]+keep[j]-K)==cls)
			{
				fk[y]=keep[i];
				sk[y]=keep[j];
				y++;
			}

		}
	}
	for(i=0;i<y;i++)
	{
		if(abs(fk[i]-sk[i])<min)
		{
			min=abs(fk[i]-sk[i]);
			f=fk[i];
			s=sk[i];
		}
	}
	
	if(f>s)
	{
		K=s;
		s=f;
		f=K;	
	}
	printf("%ld\n",f+s);
	printf("%ld %ld",f,s);
}
/*
10 7
-10 9 1 7 3 20 2
*/
