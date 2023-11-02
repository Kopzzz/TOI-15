#include<stdio.h>
main()
{
	int n,a=1,b,i,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b);
		if(b-a>10||b-a<-10)
		{
			printf("%d . . . %d",a,b);
		}
		else
		{
			for(c=0;a<b||a>b;c++)
			{
				printf("%d ",a);
				if(a>b)
					a--;
				else
					a++;
			}
			printf("%d",a);
		}
		a=b;
		printf("\n");
	}
}
