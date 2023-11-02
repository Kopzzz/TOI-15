#include<stdio.h>
main()
{
	int k,n,w,s[10001],i,j,d=1;
	scanf("%d",&k);
	scanf("%d",&n);
	s[0]=0;
	w=100*k;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&s[i]);
		if(s[i-1]==0)
		{
			if(w>s[i])
			{
				w=w-s[i];
				s[i]=0;
			}
			else if(w<s[i])
			{
				s[i]=s[i]-w;
				w=0;
				
			}
			else
			{
				s[i]=0;
				w=0;
				
			}
			if(s[i]==0)
			printf("%d\n",d);
			else if(s[i]>0&&w==0)
			{
				for(j=0;s[i]>0;d++)
				{
					w=100*k;
					if(w>s[i])
					{
						w=w-s[i];
						s[i]=0;
					}
					else if(w<s[i])
					{
						s[i]=s[i]-w;
						w=0;
					}
					else
					{
						s[i]=0;
						w=0;
					}
				}
				printf("%d\n",d);
				
			}	
		}
		else
		{
			if(w>s[i]+s[i-1])
			{
				w=w-(s[i]+s[i-1]);
				s[i]=0;
			}
			else if(w<s[i]+s[i-1])
			{
				s[i]=(s[i]+s[i-1])-w;
				w=0;
				d++;
				w=100*k;
			}
			else
			{
				s[i]=0;
				w=0;
			}
			if(s[i]==0)
			printf("%d\n",d);
			else if(s[i]>0&&w==0)
			{
				for(j=0;s[i]>0;d++)
				{
					w=100*k;
					if(w>s[i])
					{
						w=w-s[i];
						s[i]=0;
					}
					else if(w<s[i])
					{
						s[i]=s[i]-w;
						w=0;
					}
					else
					{
						s[i]=0;
						w=0;
					}
					printf("%d\n",d);	
				}
				
			}	
		}			
	}
}
