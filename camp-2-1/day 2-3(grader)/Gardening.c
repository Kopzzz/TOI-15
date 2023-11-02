#include<stdio.h>
int cost,count[50],h[50];
main(){
    int m,n,total=0,max=0,min=200000,kmax,kmin;
    scanf("%d %d",&n,&m);
    for(int d=0;d<m;d++){
        for(int p=0;p<n;p++){
            scanf("%d",&h[p]);
            if(h[p]>10){
                    count[p]+=400;
                    cost=400;
            }
            else {
                    count[p]+=h[p]*40;
                    cost=h[p]*40;
            }
            total+=cost;

        }
    }
    for(int p=0;p<n;p++){
        if(count[p]>max){
                max=count[p];
                kmax=p+1;
        }
        if(count[p]<min){
                min=count[p];
                kmin=p+1;
        }
    }
    printf("%d\n%d\n%d",total,kmax,kmin);
}
/*
3 5
7 10 3
5 6 8
0 9 10
5 8 8
10 10 10
*/
