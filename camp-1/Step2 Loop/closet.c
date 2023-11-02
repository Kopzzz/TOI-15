#include<stdio.h>
#include<math.h>
main()
{
	int x,n[8],i,cls,m[8],j,a;
	scanf("%d",&x);
	for(i=1;i<=8;i++)
	{
		scanf("%d",&n[i]);
		m[i]=x-n[i];
		m[i]=abs(m[i]);
	}
	a=1;
	cls = n[1];
	for(i=2;i<8;i++)
	{
		if(m[a]>=m[i])
		{
		    cls=n[i];
		    m[a]=m[i];

        }
	}
	printf("%d",cls);

}
