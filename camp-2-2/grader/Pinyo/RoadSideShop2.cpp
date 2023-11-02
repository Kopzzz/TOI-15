#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    long n,sum=0,k,p,Max=-1;
    vector<long> v;
    cin >> n >> k;
    for(int i=0;i<k*2+1;i++){
        cin >> p;
        v.push_back(p);
        sum+=p;
    }
    if(sum>Max) Max=sum;
    for(int i=k*2+1;i<n;i++){
        cin >> p;
        v.push_back(p);
        sum = sum+p-v[i-(k*2+1)];
        if(sum>Max) Max=sum;
    }
    cout << Max;
}
