#include <stdio.h>
int main(){
    int n,r,c;
    scanf("%d",&n);
    for(r=0;r<n;r++)
	{
        for(c=0;c<n;c++)
		{
            if(r==c||c==0||c==n-1)
			{
                printf("%d ",(n-r+2*c)%10);
            }
            else
			{
                printf("  ");
            }
        }
        printf("\n");
    }
}
/*
#include<stdio.h>

int main(){
  int input;
  scanf("%d", &input);
  int a=input+5000;
  int b=input+1;
  int c=input*2-1+input-1;
  
  for(int i=1; i<=input; i++)
  {
    for(int j=1; j<=input; j++)
	{
      if(j==1) { printf("%d ", a%10); a--; }
      else if(i==j) { printf("%d ", b%10); b++;  }
      else if(j==input) { printf("%d ", c%10); c--; }
      else printf("  ");
    }
    printf("\n");
  }
}
*/
