#include<stdio.h>
main()
{
	int i,j,n,k,y,count=0;
	struct student
	{
		char num[9];
		char name[31];
		char sur[51];
		int year;
	};
	 student std[20000];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s %s %d",&std[i].num,&std[i].name,&std[i].sur,&std[i].year);
	}
	scanf("%d",&y);
	for(i=0;i<n;i++)
	{
		if(std[i].year==y)
		{
			printf("%s %s %s\n",std[i].num,std[i].name,std[i].sur);
			count++;
		}
	}
	if(count==0)
		printf("None");
}
