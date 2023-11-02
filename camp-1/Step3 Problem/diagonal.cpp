#include<stdio.h>
main()
{
	int m,n,sum=1,count=0,total=0,i;
	scanf("%d",&n);
	m=(n-1)*2;
	for(i=1;i<=n;i++)
	{
		total+=sum;
		sum+=m;
		count++;
		
		if(count%2==0)
			m-=4;
	}
	
	printf("%d",total);
	
	
}
