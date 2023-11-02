#include<stdio.h>
int h[100000];
main()
{
    int d,count=0,sum=0,k;
    scanf("%d",&d);
    for(int i=0;i<d;i++){
        scanf("%d",&h[i]);
        count++;
        if(count>=3){
            if(h[i]<4&&h[i-1]<4&&h[i-2]<4) break;
        }
        if(h[i]==8)sum+=300;
        else if(h[i]>12)sum+=500;
        else if(h[i]>8){
            k=(h[i]-8)*50;
            sum+=300+k;
        }
        else if(h[i]>=4)sum+=150;

    }
    printf("%d",sum);
}
/*
7
8
8
10
9
8
12
6
*/
