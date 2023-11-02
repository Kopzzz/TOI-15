#include<stdio.h>
main()
{
	int a,b,c,d,box1,box2,box3,sp;
	scanf("%d %d %d",&a,&b,&c);
	box1=10*15*8;
	box2=25*15*12;
	box3=40*50*20;
	d=a*b*c;
	if (a<=10&&b<=15&&c<=8||a<=15&&b<=10&&c<=8||a<=8&&b<=10&&c<=15)
		{
			printf("%d\n%d",1,box1-d);
		}
	else if (a<=25&&b<=15&&c<=12||a<=15&&b<=25&&c<=12||a<=12&&b<=15&&c<=25)
		{
			printf("%d\n%d",2,box2-d);
		}
	else if (a<=40&&b<=50&&c<=20||a<=50&&b<=40&&c<=20||a<=40&&b<=20&&c<=50)	
		{
			printf("%d\n%d",3,box3-d);
		}
	else if	(a>40&&b<=50&&c<=20&&d<=box3||b>50&&a<=40&&c<=20&&d<=box3||c>20&&b<=50&&a<=40&&d<=box3||a*b*c>box3)
		{
			printf("Oversize product\n%d",d-box3);
		}
}
