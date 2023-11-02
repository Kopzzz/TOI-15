#include<bits/stdc++.h>
using namespace std;
int arr[1001][1001];
int main(){
    int n,m,k,num,mx=-1,sum;
    scanf("%d %d %d",&n,&m,&k);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&num);
            arr[i][j]=num+arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
        }
    }
    for(int i=k;i<=n;i++){
        for(int j=k;j<=m;j++){
            sum=arr[i][j]-arr[i-k][j]-arr[i][j-k]+arr[i-k][j-k];
            if(sum>mx) mx=sum;
        }
    }
    printf("%d",mx);
}
