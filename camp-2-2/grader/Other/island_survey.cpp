#include <bits/stdc++.h>
using namespace std;
int arr[501][501],g;
void floodfill(int r,int c,int row,int col){
    arr[r][c]=g;
    if(arr[r+1][c]==1 && r+1<row) floodfill(r+1,c,row,col);
    if(arr[r-1][c]==1 && r-1>=0) floodfill(r-1,c,row,col);
    if(arr[r][c+1]==1 && c+1<col) floodfill(r,c+1,row,col);
    if(arr[r][c-1]==1 && c-1>=0) floodfill(r,c-1,row,col);
    if(arr[r+1][c+1]==1 && r+1<row && c+1<col) floodfill(r+1,c+1,row,col);
    if(arr[r+1][c-1]==1 && r+1<row && c-1>=0) floodfill(r+1,c-1,row,col);
    if(arr[r-1][c+1]==1 && r-1>=0 && c+1<col) floodfill(r-1,c+1,row,col);
    if(arr[r-1][c-1]==1 && r-1>=0 && c-1>=0) floodfill(r-1,c-1,row,col);
}
int main(){
    int T,m,n;
    cin >> T;
    while(T--){
        g=1;
        scanf("%d %d",&m,&n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==1){
                    g++;
                    floodfill(i,j,m,n);
                }
            }
        }
        printf("%d\n",g-1);

    }
}
