#include<stdio.h>
#include<math.h>
main()
{
    int x,y,k,re,r;
    scanf("%d %d",&x,&y);
    if(x>y){
        k=x;
        x=y;
        y=k;
    }
    r=x;
    for(int i=x+1;i<y;i++){
        r=i;
        re=0;
        if(r<100){
            while(r!=0){
            k=r%10;
            re+=k*k;
            r/=10;
            }
        }
        else if(r<1000){
            while(r!=0){
            k=r%10;
            re+=k*k*k;
            r/=10;
            }
        }
        else if(r<10000){
            while(r!=0){
            k=r%10;
            re+=k*k*k*k;
            r/=10;
            }
        }
        else if(r<100000){
            while(r!=0){
            k=r%10;
            re+=k*k*k*k*k;
            r/=10;
            }
        }
        else if(r<1000000){
            while(r!=0){
            k=r%10;
            re+=k*k*k*k*k*k;
            r/=10;
            }
        }
        else if(r<10000000){
            while(r!=0){
            k=r%10;
            re+=k*k*k*k*k*k*k;
            r/=10;
            }
        }
        else if(r<100000000){
            while(r!=0){
            k=r%10;
            re+=k*k*k*k*k*k*k*k;
            r/=10;
            }
        }
        if(re==i)printf("%d ",i);
    }
}

/*
367 1657991
*/
