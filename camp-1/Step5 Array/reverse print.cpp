#include<stdio.h>
int n[10000];
main()
{
	int i,j;
	for(i=0;i<200000;i++)
	{
		scanf("%d",&n[i]);
		if(n[i]==0)
			break;		
	}
	for(j=i;j>0;j--)
	{
		printf("%d ",n[j-1]);
	}
	
		
	
}
