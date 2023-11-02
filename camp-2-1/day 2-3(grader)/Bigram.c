#include<stdio.h>
main()
{
    int x,y,count=0,a=0,b=0,c=0,d=0;
    while(1){

        if(count>=1){
            y=x;
            scanf("%d",&x);
            if(x!=1&&x!=0)break;
            else if(y==0&&x==0) a++;
            else if(y==0&&x==1) b++;
            else if(y==1&&x==0) c++;
            else if(y==1&&x==1) d++;
        }
        else {
            scanf("%d",&x);
            if(x!=1&&x!=0)break;
        }
        count++;

    }
    printf("%d\n%d\n%d\n%d",a,b,c,d);
}
/*
0
1
1
0
1
0
0
0
1
9
*/
