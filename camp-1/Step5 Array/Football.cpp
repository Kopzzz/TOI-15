#include<stdio.h>
main()
{
	char r[40];
	int n,i,j,sumP=0,sumN=0,sumF=0,w,d,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sumP=0;sumN=0;sumF=0;w=0;d=0;l=0;
		scanf("%s",&r);
		for(j=0;j<38;j++)
		{
			if(r[j]=='W')
			{
				w+=1;
			}
			else if(r[j]=='D')
			{
				d+=1;
			}
			else if(r[j]=='L')
			{
				l+=1;
			}
		}
		printf("%d %d %d ",w,d,l);
		for(j=0;j<38;j++)
		{
			if(r[j]=='W')
			{
				sumP+=2;
			}
			else if(r[j]=='D')
			{
				sumP+=1;
			}
			else if(r[j]=='L')
			{
				sumP+=0;
			}
		}
		printf("%d ",sumP);
		for(j=0;j<38;j++)
		{
			if(r[j]=='W')
			{
				sumN+=3;
			}
			else if(r[j]=='D')
			{
				sumN+=1;
			}
			else if(r[j]=='L')
			{
				sumN+=0;
			}
		}
		printf("%d ",sumN);
		for(j=0;j<38;j++)
		{
			if(r[j]=='W')
			{
				sumF+=5;
			}
			else if(r[j]=='D')
			{
				sumF+=1;
			}
			else if(r[j]=='L')
			{
				sumF+=-1;
			}
			
		}
		printf("%d\n",sumF);
	}	
	
}

