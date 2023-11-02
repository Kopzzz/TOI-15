#include<bits/stdc++.h>
using namespace std;
class Runner{
public:
    float speed,t;
    int number;
    Runner(float v,float t,float l,int number){
        this->number = number;
        speed = l/v*1000+t;
        this->t =t;
    }
};
struct compare{
    bool operator()(const Runner& n1,const Runner& n2){
        if(n1.speed!=n2.speed)return n1.speed>n2.speed;
        else return n1.t<n2.t;
    }
};
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    priority_queue<Runner,vector<Runner>,compare> pq;
    float n,T,l,v,t;
    cin >> T;
    while(T--){
        cin >> n >> l;
        for(int i=1;i<=n;i++){
            cin >> v >> t;
            pq.push(Runner(v,t,l,i));
        }
        for(int i=1;i<=n;i++){
            printf("%d\n",pq.top().number);
            pq.pop();
        }
    }

}
