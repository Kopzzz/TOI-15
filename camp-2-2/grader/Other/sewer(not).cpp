#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
struct compare{
    bool operator()(const pii& n1,const pii& n2){
        return n1.second<n2.second;
    }
}compare;
int main(){
    vector<pii> v[50001];
    int  n,h,k,t;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=k;i++){
        scanf("%d %d",&t,&h);
        v[t].push_back(pii(t+1,h));
        if(t+1<=n) v[t+1].push_back(pii(t,h));
    }
    for(int i=1;i<=n;i++) sort(v[i].begin(),v[i].end(),compare);
    for(int i=1;i<=n;i++){
        t=i;
        h=50001;
        while(1){
            bool ch=0;
            for(int j=v[t].size()-1;j>=0;j--){
                if(v[t][j].second<h){
                    h=v[t][j].second;
                    t=v[t][j].first;
                    ch=1;
                    break;
                }
            }
            if(ch==0) break;
        }
        printf("%d\n",t);
    }
}
