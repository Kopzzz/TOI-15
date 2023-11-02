#include <stdio.h>
main()
{
	int id1,id2,id3,v1,v2,v3,n,k,ip[10000],v=0,i,sum=0,p[10000],all=0;
	scanf("%d %d",&id1,&v1);
	scanf("%d %d",&id2,&v2);
	scanf("%d %d",&id3,&v3);
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&ip[i],&p[i]);
		if(ip[i]==id1)
		{
			v+=v1;
			sum+=p[i];
		}
		else if(ip[i]==id2)
		{
			v+=v2;
			sum+=p[i];
		}
		else if(ip[i]==id3)
		{
			v+=v3;
			sum+=p[i];
		}
		all+=p[i];
			
	}
	sum=all-sum;
	v=v+(sum/k);
	printf("%d\n",all);
	printf("%d\n",sum);
	printf("%d",v);
}
