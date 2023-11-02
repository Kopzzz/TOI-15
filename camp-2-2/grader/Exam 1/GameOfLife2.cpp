#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m,t,r,c,row,col,sum;
    cin >> n >> m;
    int arr[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> arr[i][j];
        }
    }
    cin >> t;
    while(t--){
        cin >> row >> col >> r >> c;
        sum=0;
        for(int i=r-1;i>=r-row/2;i--){
            for(int j=c;j>=c-col/2;j--){
                if(i>0 && i<=n && j>0 &&j<=m) sum+=arr[i][j];
            }
            for(int j=c+1;j<=c+col/2;j++){
                if(i>0 && i<=n && j>0 &&j<=m) sum+=arr[i][j];
            }
        }
        for(int i=r;i<=r+row/2;i++){
            for(int j=c;j>=c-col/2;j--){
               if(i>0 && i<=n && j>0 &&j<=m) sum+=arr[i][j];
            }
            for(int j=c+1;j<=c+col/2;j++){
               if(i>0 && i<=n && j>0 &&j<=m) sum+=arr[i][j];
            }
        }
        printf("%d\n",sum);
    }
}
