#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m,sum=0;
    cin >> n >> m;
    int arr[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> arr[i][j];
            sum+=arr[i][j];
            if(arr[i][j]==1){
            }
        }
    }
    printf("%d\n",sum);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]==1){
                printf("%d %d\n",i,j);
            }
        }
    }
}
