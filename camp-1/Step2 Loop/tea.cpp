#include<stdio.h>
main()
{
	int w[10],s[10],d,i,t[10],w2[10];
	for(d=1;d<=7;d++)
	{
		scanf("%d %d",&w[d],&s[d]);
		
		w2[d]=w[d];
		w[d]=w[d]/250;
		s[d]=s[d]/15;
		if(w[d]<=s[d])
			t[d]=w[d];
		else if (s[d]<=w[d])
			t[d]=s[d];
		printf("%d ",t[d]);
		t[d]=t[d]*250;
		if(t[d]/250==0)
		{
			if(w2[d]!=0)
			{
			printf("water");}
		}
		else if(t[d]/250==1)
		{
			if(w2[d]>250)
			{
			printf("water");}
		}

		else if(w2[d]%t[d]!=0)
		printf("water");		
	}
}
