#include<stdio.h>
main()
{
	int t[100000],m[100000],i,a=0,b=0,sum1=0,sum2=0;
	for(i=1;i<100000;i++)
	{
		scanf("%d",&t[i]);
		if(t[i]==0) break;
		scanf("%d",&m[i]);
		
		if(t[i]==1)
		{
			a++;;
			sum1+=m[i];
		}
		else if(t[i]==2)
		{
			b++;
			sum2+=m[i];
		}
	}
	printf("%d %d\n%d %d %d",a,b,sum1,sum2,sum1-sum2);
}
