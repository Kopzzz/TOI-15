#include<stdio.h>
main()
{
	int n,a,b,c,d,box1,box2,box3,i,j=-1,b1,b2,b3,count=0;
	scanf("%d",&n);
	scanf("%d %d %d",&b1,&b2,&b3);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		box1=10*15*8;
		box2=25*15*12;
		box3=40*50*20;
		d=a*b*c;

			if (a<=10&&b<=15&&c<=8||a<=15&&b<=10&&c<=8||a<=8&&b<=10&&c<=15)
			{
				while(j<i)
				{	
					if (b1==0)  break;
					printf("%d\n",1);
					j++;
					b1--;
					count++;
				}
			}
		if (count==i+1)
			continue;	

		if (a<=25&&b<=15&&c<=12||a<=15&&b<=25&&c<=12||a<=12&&b<=15&&c<=25)
		{
			while(j<i)	
			{
				if(b2==0) break;
				printf("%d\n",2);
				j++;
				b2--;
				count++;
			}
		}
		if (count==i+1)
			continue;
			if(a<=40&&b<=50&&c<=20||a<=50&&b<=40&&c<=20||a<=40&&b<=20&&c<=50)	
		{
			while(j<i)			
			{
				if (b3==0) 
				{
					printf("Box not available\n");
					j++;
					count++;		
				}
				else
				{
					printf("%d\n",3);
					j++;
					d=a*b*c;
					b3--;
					count++;
				}
			}
		}
		if (count==i+1)
			continue;
			
		printf("Oversize product\n");
		count++;
		j++;

	}
}
