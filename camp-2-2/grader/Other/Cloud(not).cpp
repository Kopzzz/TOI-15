#include <bits/stdc++.h>
using namespace std;
typedef pair<long,long> pii;
int main(){
    long n,k,t,ans;
    scanf("%ld %ld",&n,&k);
    pair<pii,long> cloud[n];
    for(int i=0;i<n;i++)
        scanf("%ld %ld %ld",&cloud[i].first.first,&cloud[i].first.second,&cloud[i].second);
    while(k--){
        scanf("%ld",&t);
        ans=0;
        vector<pii> v;
        set<pii> s;
        for(int i=0;i<n;i++){
            if(cloud[i].second==1){
                v.push_back(make_pair(cloud[i].first.first-t,cloud[i].first.second-t));
                if(v[i].second >= 1){
                    ans++;
                }
            }
            if(cloud[i].second==2){
               v.push_back(make_pair(cloud[i].first.first+t,cloud[i].first.second+t));
                if(v[i].first <= 1000000000){
                    ans++;
                }
            }
        }
        for(int k=0;k<v.size();k++){
            for(int j=0;j<v.size();j++){
                if(j!=k)if((v[k].first>=v[j].first && v[k].first<=v[j].second)
                    ||(v[k].second>=v[j].first && v[k].second<=v[j].second))
                {
                    ans--;
                    break;
                }

            }
        }
        for(auto& it:v) printf("%d %d\n",it.first,it.second);
        printf("\t%ld\n",ans);
    }
}
