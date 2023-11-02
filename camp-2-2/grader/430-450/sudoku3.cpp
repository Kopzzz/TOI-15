#include<bits/stdc++.h>
using namespace std;
int arr[20][20];
bool ans[10];
int main(){
    int n,num,t,i,j,row,col,c,r;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            scanf("%d",&arr[i][j]);
        }
    }
        for(i=1;i<=9;i++){
            for(j=1;j<=9;j++){
                if(arr[i][j]==0){
                    printf("%d %d ",i,j);
                    c=j;
                    for(r=1;r<=9;r++){
                        ans[arr[r][c]]=1;
                    }
                    r=i;
                    for(c=1;c<=9;c++){
                        ans[arr[r][c]]=1;
                    }
                    if(i<=3) row=1;
                    else if(i<=6) row=4;
                    else if(i<=9) row=7;
                    if(j<=3) col=1;
                    else if(j<=6) col=4;
                    else if(j<=9) col=7;
                    for(r=row;r<=row+2;r++){
                        for(c=col;c<=col+2;c++) ans[arr[r][c]]=1;
                    }
                    for(int k=1;k<=9;k++){
                        if(ans[k]==0) printf("%d ",k);
                    }
                    printf("\n");
                     for(int k=1;k<=9;k++)  ans[k]=0;

                }
            }
        }

}


