#include<bits/stdc++.h>
using namespace std;
int arr[1001][1001],row,col,ans[100000],nub;
int floodfill(int r,int c,int k){
    if(arr[r][c]==2) nub++;
    arr[r][c]=k;
    if(arr[r-1][c]>0 && arr[r-1][c] <4  && r-1>=1) floodfill(r-1,c,k);
    if(arr[r+1][c]>0 && arr[r+1][c] <4  && r+1<=row) floodfill(r+1,c,k);
    if(arr[r][c-1]>0 && arr[r][c-1] <4  && c-1>=1) floodfill(r,c-1,k);
    if(arr[r][c+1]>0 && arr[r][c+1] <4  && c+1<=col) floodfill(r,c+1,k);
    return nub;
}
int main(){
    int k=4,T;
    scanf("%d %d",&row,&col);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++) scanf("%d",&arr[i][j]);
    }
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(arr[i][j]>0 && arr[i][j]<4){
                nub=0;
                ans[k]=floodfill(i,j,k);
                k++;
            }
        }
    }
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&row,&col);
        int i;
        for(i=4;i<k;i++){
            if(i==arr[row][col]) break;
        }
        printf("%d\n",ans[i]);
    }
}

