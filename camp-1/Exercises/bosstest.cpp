#include <cstdio>

int main(){
	int a,b,i,p[1000],k=0,ans[1000],count=1,run;	
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;i++){
		p[i] = i;
	}
	while(count<=a){
		for(run=1;run<=b;run++){
			k++;
			if(k>a){
			k=k%a;
			}
			while(p[k]==0){
			k++;
			if(k>a){
				k=k%a;
					}	
				}	
			}			

		if(p[k]<=a){
			ans[count]=p[k];
			p[k]=0;
			count++;
		}
	}
		for(i=1;i<=a;i++){
		printf("%d ",ans[i]);
	}
	
}
