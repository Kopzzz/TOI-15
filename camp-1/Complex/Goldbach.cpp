#include<stdio.h>


main()
{
	double m,j,i,l,k,sum=0,count;
	for(i=1;1>0;i++)
	{
		count=0;
		
		scanf("%lf",&m);
		if(m==0)
			break;
		for(j=1;j<m*m;j+=2)
		{
			l=j;
			for(k=0;k<m;k++)
			{
				sum+=l;
				l+=2;
			}
			if(sum==m*m*m)
			{
				count++;
				break;
			}
			sum=0;
			
		}
		if(count>0)
		{
			printf("Y %.0lf",j);
		}
		else
			printf("N 0");
 }

	
}
