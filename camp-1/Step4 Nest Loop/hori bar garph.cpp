#include <stdio.h>
main()
{
	int i,j,s,n;
	for(i=0;i<100000;i++)
	{
		scanf("%d",&s);
		if(s<=0)
			break;
		
		for(i=0;i<s;i++)
		{
			printf("*");
		}
		printf("\n");
	}
}
