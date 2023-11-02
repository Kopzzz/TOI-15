#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Runner{
public:
    int number;
    float v,t,M,c;
    Runner(float v,float t,int number,float M){
        this->v=v;
        this->t=t/10;
        this->number=number;
        this->M=M;
        c=M/v*1000+t;
    };
};

struct compare{
    bool operator()(const Runner& n1,const Runner& n2){
         if(n1.c!=n2.c)return n1.c>n2.c;
         else return n1.t<n2.t;
    };
};
main(){
    priority_queue<Runner,vector<Runner>,compare>pq;
    int T,N;
    float M,v,t;
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> N >> M;
        int number=1;
        for(int j=0;j<N;j++){
            cin >> v >> t;
            pq.push(Runner(v,t,number,M));
            number++;
        }
        while(pq.size()>0){
            Runner k = pq.top();
            cout << k.number << endl;

            pq.pop();
        }
    }
}
/*
3
3 120
10 120
12 2120
13 120
4 500
13 3300
12 0
10 20
12 550
4 90
3 0
6 15000
9 20000
1 0
*/
