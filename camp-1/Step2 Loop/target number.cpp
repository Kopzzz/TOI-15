#include<stdio.h>
main()
{
	int x,n[10000],count=0,i;
	scanf("%d",&x);
	for(i=1;i<10000;i++)
	{
		scanf("%d",&n[i]);
		if(n[i]==x)
			count++;
		else if(n[i]==0)
			break;
		
	}
	if(count==0)
		printf("None");
	else
	printf("%d",count);
}
