#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int A,B,C[100000],D[100000],N,R,K,i,count=0,a,b;
	scanf("%d %d",&A,&B);
	scanf("%d",&R);
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d %d",&C[i],&D[i]);
		a=C[i]-A;	
		a=abs(a);
		b=D[i]-B;	
		b=abs(b);
		K=a+b;
		if(K<=R)
			count++;		
	}
	printf("%d",count);
}
