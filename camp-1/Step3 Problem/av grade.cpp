#include<stdio.h>
main()
{
	int a,b,c,d,s[10],i;
	float av;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	for(i=0;i<8;i++)
	{
		scanf("%d",&s[i]);
		if(s[i]>=a){
			printf("4\n");
			av+=4;}
		else if(s[i]>=b){
			printf("3\n");
			av+=3;}
		else if(s[i]>=c){
			printf("2\n");
			av+=2;}
		else if(s[i]>=d){
			printf("1\n");
			av+=1;}
		else {
			printf("0\n");
			av+=0;}
	}
	av=av/8;
	printf("%.6f",av);
}
