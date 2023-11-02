#include<stdio.h>
#define SIZE 10001
main()
{
	int n,num[SIZE],f,i,j,s[SIZE],keep[SIZE],kk,k,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(num[i]<num[j])
			{			
				kk=num[j];
				num[j]=num[i];
				num[i]=kk;
			}
		}		
	}

		k=0;
	for(i=0;i<n;i++)
	{
		k++;
		for(j=k;j<=n;j++)
		{
			if(num[i]==num[j])
			{
				num[j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(num[i]!=0)
		printf("%d ",num[i]);
	}


}

