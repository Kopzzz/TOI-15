#include<stdio.h>
int t[1000000];
main()
{
    int n,m,th,b=0;
    scanf("%d %d %d",&n,&m,&th);
    b=m;
    for(int i=1;i>0;i++){
        scanf("%d",&t[i]);
        if(t[i]<t[i-1]){
            printf("%d\n",b);
            break;
        }
        else if(t[i]-t[i-1]>n){
            printf("%d\n",b);
            b=m;
            th/=2;

        }
        else if(b>=th){
            printf("%d\n",b);
            b+=m;
        }
        else {
            printf("%d\n",b);
            b*=2;
        }
    }
}
/*
5 1500 12000
3
4
5
7
13
14
16
17
2
*/
