#include<stdio.h>
main()
{
	int m,x,y,z,x1,y1,z1;
	scanf("%d %d %d",&x,&y,&z);
	x1=x/3;
	y1=y/4;
	z1=z/2;
	if(x1<=y1&&x1<=z1)
		m=x1;
	if(y1<=x1&&y1<=z1)
		m=y1;
	if(z1<=y1&&z1<=x1)
		m=z1;
	y=y-m*4;
	x=x-m*3;
	z=z-m*2;
	
	printf("%d %d %d %d",m,x,y,z);
	
}
