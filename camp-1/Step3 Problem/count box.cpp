#include<stdio.h>

main()
{
	int n,a,b,c,d,box1,box2,box3,i,b1=0,b2=0,b3=0,b11=0,b22=0,b33=0,k1=0,k2=0,k3=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		box1=10*15*8;
		box2=25*15*12;
		box3=40*50*20;
		d=a*b*c;
		if (a<=10&&b<=15&&c<=8||a<=10&&b<=8&&c<=15||a<=15&&b<=8&&c<=10||a<=15&&b<=10&&c<=8||a<=8&&b<=10&&c<=15||a<=8&&b<=15&&c<=10)
		{
			printf("%d\n",1);
			b1++;
			k1=box1-d;
			b11+=k1;
		}

		else if (a<=25&&b<=15&&c<=12||a<=25&&b<=12&&c<=15||a<=12&&b<=15&&c<=25||a<=12&&b<=25&&c<=15||a<=15&&b<=25&&c<=12||a<=15&&b<=12&&c<=25)
		{
			printf("%d\n",2);
			b2++;
			k2=box2-d;
			b22+=k2;
		}
		else if (a<=40&&b<=50&&c<=20||a<=40&&b<=20&&c<=50||a<=50&&b<=20&&c<=40||a<=50&&b<=40&&c<=20||a<=20&&b<=40&&c<=50||a<=20&&b<=50&&c<=40)	
		{
			printf("%d\n",3);
			b3++;
			k3=box3-d;
			b33+=k3;
		}
		else
		{
			printf("Oversize product\n");
		}

		
	}
	printf("%d %d\n",b1,b11);
	printf("%d %d\n",b2,b22);
	printf("%d %d",b3,b33);
}
