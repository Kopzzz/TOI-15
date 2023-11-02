#include<stdio.h>
int a,b,c;
main()
{
	scanf("%d %d %d",&a,&b,&c);
	if(a+b==c)printf("+");
	else if(a-b==c)printf("-");
	else if(a*b==c)printf("*");
	else if(a/b==c)printf("/");
	else if(a%b==c)printf("%%");
}
