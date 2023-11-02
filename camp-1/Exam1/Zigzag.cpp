#include<stdio.h>
main()
{
	int i=0,n[100000],count=0,k=0,m=0;
	scanf("%d",&n[i]);
	i++;
	
	while(n[i-1]!=0)
	{
		scanf("%d",&n[i]);
		if(n[i]<=0)
			break;
		if((n[i]-n[i-1])%2!=0)
		{
			count++;
			m=count;
		}
		if(k<m)
			k=m;
		if((n[i]-n[i-1])%2==0)
			count=0;			
		i++;
	}
	if(k%2==1)
		printf("%d",k/2+1);
	else
		printf("%d",k/2);
}

