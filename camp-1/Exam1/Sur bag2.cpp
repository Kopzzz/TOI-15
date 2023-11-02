#include<stdio.h>
main()
{
	int i,m,k,x,y,z,x1,y1,z1,kx=0,ky=0,kz=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d %d %d",&x,&y,&z);
		x=x+kx;
		y=y+ky;
		z=z+kz;
		x1=x/3;
		y1=y/4;
		z1=z/2;
		if(x1<=y1&&x1<=z1)
			m=x1;
		if(y1<=x1&&y1<=z1)
			m=y1;
		if(z1<=y1&&z1<=x1)
			m=z1;
		kx=x-m*3;
		ky=y-m*4;
		kz=z-m*2;
		printf("%d %d %d %d\n",m,kx,ky,kz);
		
	}
/*	scanf("%d %d %d",&x,&y,&z);
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
	
		
	printf("%d %d %d %d",m,x,y,z);*/
	
	
}
