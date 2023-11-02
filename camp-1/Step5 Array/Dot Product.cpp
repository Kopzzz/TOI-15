#include<stdio.h>
main()
{
	int N,i;
	scanf("%d",&N);
	int n[N],m[N],r[N],j=0;
	for(i=0;i<N;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<N;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<N;i++)
	{
		r[i]=n[i]*m[i];
		j+=r[i];
	}
	printf("%d",j);
	
}
