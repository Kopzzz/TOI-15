#include <bits/stdc++.h>
using namespace std;
int cost[500001],Min[500001];
typedef pair<int,int> pi;
struct compare{
    bool operator()(const pi& n1,const pi& n2){
        return n1>n2;
    }
};
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    priority_queue<pi,vector<pi>,compare >  pq;
    int n,k;
    cin >> n >> k;
    for(int i=1;i<=n;i++) cin>>cost[i];
    pq.push(make_pair(cost[1],1));
    for(int i=2;i<=n;i++){
        while(i - pq.top().second > k) pq.pop();
        Min[i]=pq.top().first+cost[i];
        pq.push(make_pair(Min[i],i));

    }
    while(pq.top().second < n) pq.pop();
    printf("%d",pq.top().first);
}
/*
7
3
1 4 2 6 2 4 2
*/
