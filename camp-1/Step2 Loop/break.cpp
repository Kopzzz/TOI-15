#include<stdio.h>
main()
{
	int n[100],count=0,i;
	for(i=1;i<100;i++)
	{
		scanf("%d",&n[i]);
		if(n[i]!=0)
			count++;
		else
			break;
		
	}
	printf("%d",count);
}
