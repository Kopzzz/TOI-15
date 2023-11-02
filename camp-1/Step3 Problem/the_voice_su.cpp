#include<stdio.h>
main()
{
	int n,k,s,num,f=0,m=0,y,x,i;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&s,&y,&x);
		if(y>=9&&x<9)
		{
			if(m<k)
			{
				m++;
				printf("%d 1\n",i);
			}
			
		}
		else if(y<9&&x>=9)
		{
			if(f<k)
			{
				f++;
				printf("%d 2\n",i);
			}
		}
		else if(y>=9&&x>=9)
		{
			if(m<k&&f==k)
			{
				m++;
				printf("%d 1\n",i);
			}
			else if(f<k&&m==k)
			{
				f++;
				printf("%d 2\n",i);
			}
			else if(f<k&&m<k)
			{
				if(s==1)
				{
					m++;
					printf("%d 1\n",i);
				}
				else if(s==2)
				{
					f++;
					printf("%d 2\n",i);
				}
			}
		}
	}
}
