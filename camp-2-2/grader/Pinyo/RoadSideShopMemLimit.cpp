#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    long sum=0,Max=-1,n,k,p;
    queue<long> q;
    cin >> n >> k;
    for(int i=0;i<k*2+1;i++){
        cin >> p;
        q.push(p);
        sum+=p;
    }
    if(sum>Max) Max=sum;
    for(int i=k*2+1;i<n;i++){
        cin >> p;
        q.push(p);
        sum = sum+p-q.front();
        q.pop();
        if(sum>Max) Max=sum;
    }
    cout << Max;
}
