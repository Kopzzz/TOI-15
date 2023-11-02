#include<stdio.h>
main()
{
	int n,a=0,b=0,c=0,i,t[100000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t[i]);

		if(a==0||a<=b&&a<=c)
		{
			a+=t[i];
			printf("A\n");
		}
		else if(b==0||b<a&&b<=c)
		{
			b+=t[i];
			printf("B\n");
		}
		else if(c==0||c<a&&c<b)
		{
			c+=t[i];
			printf("C\n");
		}

	}
}

