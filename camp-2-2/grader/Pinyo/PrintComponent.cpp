#include <bits/stdc++.h>
int arr[1501][1501],row,col,g=1,sum[500000],rB[500000],rE[500000],cB[500000],cE[500000];
void floodfill(int r,int c){
    arr[r][c]=g;
    if(r<rB[g])rB[g]=r;
    if(r>rE[g])rE[g]=r;
    if(c<cB[g])cB[g]=c;
    if(c>cE[g])cE[g]=c;
    sum[g]++;
    if(arr[r+1][c]==1 && r+1<=row)floodfill(r+1,c);
    if(arr[r-1][c]==1 && r-1>0)floodfill(r-1,c);
    if(arr[r][c+1]==1 && c+1<=col)floodfill(r,c+1);
    if(arr[r][c-1]==1 && c-1>0)floodfill(r,c-1);
}
int main(){
    bool ch,ch2;
    int r,c,T,temp;
    scanf("%d %d",&row,&col);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(arr[i][j]==1) {
                g++;
                rB[g]=10000;
                rE[g]=-1;
                cB[g]=10000;
                cE[g]=-1;
                floodfill(i,j);
            }
        }
    }
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&r,&c);
        temp=arr[r][c];
        if(arr[r][c]==0) printf("-\n");
        else{
            printf("%d\n",sum[temp]);
            for(int i=rB[temp];i<=rE[temp];i++){
                for(int j=cB[temp];j<=cE[temp];j++){
                    if(arr[i][j]==temp) printf("*");
                    else printf(" ");
                }
                printf("\n");
            }
        }
    }
}

