#include<bits/stdc++.h>
using namespace std;
int arr[20][20];
int main(){
    int n,num,t,i,j,row,col,c;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&n);
    while(n--){
        c=0;
        scanf("%d %d",&t,&num);
        if(t==-1){
            i=num;
            for(j=1;j<=9;j++){
                if(arr[i][j]!=0){
                    c++;
                    printf("%d ",arr[i][j]);
                }
            }
        }
        if(t==1){
            i=num;
            for(j=1;j<=9;j++){
                if(arr[j][i]!=0){
                    c++;
                    printf("%d ",arr[j][i]);
                }
            }
        }
        if(t==0){
            if(num==1){
                row=1;
                col=1;
            }
            else if(num==2){
                row=1;
                col=4;
            }
            else if(num==3){
                row=1;
                col=7;
            }
            else if(num==4){
                row=4;
                col=1;
            }
            else if(num==5){
                row=4;
                col=4;
            }
            else if(num==6){
                row=4;
                col=7;
            }
            else if(num==7){
                row=7;
                col=1;
            }
            else if(num==8){
                row=7;
                col=4;
            }
            else if(num==9){
                row=7;
                col=7;
            }
            for(i=row;i<=row+2;i++){
                for(j=col;j<=col+2;j++){
                    if(arr[i][j]!=0){
                        c++;
                        printf("%d ",arr[i][j]);
                    }
                }
            }
        }
        if(c>0)printf("\n");
        else printf("0\n");
    }
}

