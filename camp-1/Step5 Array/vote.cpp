#include<stdio.h>
main()
{
	int N,k,s[100000],num[100000],i,j,max,max2,score[100000];
	scanf("%d %d",&N,&k);
	for(i=0;i<=N;i++)
	{
		score[i]=0;
		num[i]=i;
	}
	
	for(i=1;i<=k;i++)
	{
		scanf("%d",&s[i]);
		for(j=1;j<=N;j++)
		{
			if(j==s[i])
			score[j]++;
		}
	}
	max=num[1];
	max2=score[1];
	for(i=1;i<=N;i++)
	{
		if(score[i]>max2)
		{
			max=num[i];
			max2=score[i];
		}
	}
	printf("%d\n%d",max,max2);
	
	
}
