#include<stdio.h>
main()
{
	int n[8],even,e,odd,o,i;
	even=0;
	odd=0;
	for(i=1;i<=8;i++)
	{
		scanf("%d",&n[i]);
		if (n[i]%2==1||n[i]%2==-1)
		{
			o=n[i];
			odd+=o;
		}
		else
		{
			e=n[i];
			even+=e;
		}
	}
	if(even>odd)
	printf("even\n");
	else if(even<odd)
	printf("odd\n");
	else if(even==odd)
	printf("equal\n");
	
	printf("%d\n",even);
	printf("%d",odd);
	
}
