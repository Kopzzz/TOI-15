#include<stdio.h>
main()
{
	int N,i,j,q,maxG=-1,maxS=-1,maxC=-1,maxM=-1,count=0;
	struct medal 
	{
		int num;
		int g;
		int s;
		int c;
		int med;
	};
	medal m[250];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		m[i].g = 0;
		m[i].s = 0;
		m[i].c = 0;
	}
	
	for(i=0;i<N;i++)
	{
		scanf("%d %d %d %d",&m[i].num,&m[i].g,&m[i].s,&m[i].c);
//		printf("%d %d %d %d\n",m[i].g,m[i].s,m[i].c,m[j].med);
	}
	
	for(i=0;i<N;i++)
	{
		if(m[i].g>maxG)
		{
			maxG=m[i].g;
		}
	}
	for(i=0;i<N;i++)
	{
		if(m[i].s>maxS)
		{
			maxS=m[i].s;
		}
	}
	for(i=0;i<N;i++)
	{
		if(m[i].c>maxC)
		{
			maxC=m[i].c;
		}
	}

	for(i=0;i<N;i++)
	{
		m[i].med=m[i].g + m[i].s + m[i].c;
	}
	for(i=0;i<N;i++)
	{
		if(m[i].med>maxM)
		{
			maxM=m[i].med;
		}
	}
	
	
	for(i=0;i<100;i++)
	{
		scanf("%d",&q);
		count=0;
		if(q<=0)
		{
			printf("good bye");
			break;
			
		}
		if(q==1001)
		{
			for(j=0;j<N;j++)
			{
				if(m[j].g==maxG)
				{		
					printf("%d ",m[j].num);
					count++;
				}
			}
		}
		if(q==1002)
		{
			for(j=0;j<N;j++)
			{
				if(m[j].s==maxS)
				{
					printf("%d ",m[j].num);
					count++;
				}
			}
		}
		if(q==1003)
		{
			for(j=0;j<N;j++)
			{
				if(m[j].c==maxC)
				{				
					printf("%d ",m[j].num);
					count++;
				}
			}
		}

		if(q==2000)
		{
			for(j=0;j<N;j++)
			{
				if(m[j].med==maxM)
				{
					printf("%d ",m[j].num);
					count++;
				}
			}
			
		}
		if(q==3000)
		{
			for(j=0;j<N;j++)
			{
				if(m[j].med>0)
				{
					printf("%d ",m[j].num);
					count++;
				}
			}					
		}
		else
		{
			for(j=0;j<N;j++)
			{
				if(q==m[j].num)
				{
					printf("%d %d %d %d",m[j].g,m[j].s,m[j].c,m[j].med);
					count++;
				}
			}
		}

		if(count==0)
		{
			printf("invalid code");
		}
	
		printf("\n");	
	}
}
/*
5
123 10 1 2
7 5 0 3
2 0 1 3
21 0 0 0
20 1 1 0
2
21
123
8
123
1001
1002
1003
2000
3000
1245
-3
*/
