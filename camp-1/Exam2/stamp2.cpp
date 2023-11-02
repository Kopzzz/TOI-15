#include <stdio.h>
main()
{
	int id1,id2,id3,t1,t2,t3,v1,v2,v3,n,k,ip[10000],v=0,i,sum=0,p[10000],all=0;
	scanf("%d %d %d",&id1,&t1,&v1);
	scanf("%d %d %d",&id2,&t2,&v2);
	scanf("%d %d %d",&id3,&t3,&v3);
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&ip[i],&p[i]);
		
		all+=p[i];
		if(ip[i]==id1)
		{
			
			if(t1==1)
			{
				v+=v1;
			}
			else
			{
				all-=v1;
			}
		}
		else if(ip[i]==id2)
		{
			if(t2==1)
			{
				v+=v2;
			}
			else
			{
				all-=v2;
			}
		}
		else if(ip[i]==id3)
		{
			if(t3==1)
			{
				v+=v3;
			}
			else
			{
				all-=v3;
			}
		}
		else
		{
			sum+=p[i];
		}			
	}
	v=v+(sum/k);
	printf("%d\n",all);
	printf("%d\n",sum);
	printf("%d",v);
}
