#include <stdio.h>
#include <math.h>

int main(){
	long long int i,a,b,c,n,a1,a2,a3,tue=0;
	scanf("%lld %lld %lld",&a,&b,&c);
	for(n=1;n<=a+b+c;n++){
		a1=pow(a,n);
		a2=pow(b,n);
		a3=pow(c,n);
		if(a1+a2==a3){
			tue++;
			if(tue>=1){
		printf("%lld",n);
		}
		}
	}
	if(tue==0){
		printf("NO");
	}
	return 0;
}
