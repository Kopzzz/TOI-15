#include<stdio.h>
main()
{
	char p[1000];
	int n,m,f,i,j,t[1000],count=0,con=0;
	scanf("%d",&n);
	scanf("%s",&p);
	
	for(i=1;i<=n;i++)
	{
		if(p[i]=='F')
		{
			t[i]=1;  //Female = 1
		}
		else
		{
			 t[i]=0;  //Male = 0
		}	
	}
	do
	{
		con=0;
		for(i=1;i<n;i++)
		{	
			if(t[i]==0&&t[i+1]==1)
			{
				t[i]=1;
				t[i+1]=0;
				con++;
				i++;
			}
		}
				if(con>0)
					count++;
	}while(con>0);

	
	printf("%d",count);
}
