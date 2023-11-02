#include<bits/stdc++.h>
using namespace std;
int r[1000001],c[1000001];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,row,col,g=0,ans=0;
    cin >> n;
    while(n--){
        cin >> row >> col;
        if(r[row]==0 && c[col]==0){
            g++;
            r[row]=g;
            c[col]=g;
            ans++;
        }
        else if(r[row]!=0 && c[col]==0) c[col]=r[row];
        else if(r[row]==0 && c[col]!=0) r[row]=c[col];
        else if(r[row]!=0 && c[col]!=0 && r[row]!=c[col]){
            r[row]=c[col];
            ans--;
        }

    }
    cout << (ans+1)/2;
}

