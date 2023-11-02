#include<stdio.h>
main()
{
	int i,j,n,k;
	float max;
	struct student
	{
		char num[9];
		char name[31];
		char sur[51];
		float grade;
	};
	struct student std[100];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s %s %f",&std[i].num,&std[i].name,&std[i].sur,&std[i].grade);
	}
	max=-10;
	for(i=0;i<n;i++)
	{
		if(std[i].grade>max)
		{
		 max=std[i].grade;
		 k=i;
		}
	}

	printf("%s %s %s %.2f",std[k].num,std[k].name,std[k].sur,std[k].grade);
	
}

