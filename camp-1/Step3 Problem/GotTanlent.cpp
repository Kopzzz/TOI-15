#include<stdio.h>
main()
{
	int n,k,i,s1,s2,s3,count=0,con;
	scanf("%d %d",&n,&k);
	con=k;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&s1,&s2,&s3);
		if(con==0) 
		{
			s1=-1;
			s2=-1;
			s3=-1;
		}
		if(s1>=8&&s2>=8||s2>=8&&s3>=8||s1>=8&&s3>=8||s1>=8&&s2>=8&&s3>=8)
		{
			con--;
			printf("Yes\n");
			count++;
		}
		else
		{
			printf("No\n");
		}		
	}
	printf("%d",count);
}
