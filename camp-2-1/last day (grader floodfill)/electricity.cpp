#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
class Elec{
public:
    int cost;
    int pos;
    Elec(int cost,int pos){
        this->cost=cost;
        this->pos=pos;
    };
};
struct compare{
    bool operator()(const Elec& n1,const Elec& n2){
        return n1.cost>n2.cost;
    };
};
int main(){
    priority_queue<Elec,vector<Elec>,compare>pq;
    int n,k,x;
    scanf("%d %d",&n,&k);
    int A[n],keep[n];
    for(int i=0;i<n;i++) scanf("%d",&A[i]);
    keep[n-1]=A[n-1];
    pq.push(Elec(keep[n-1],n-1));
    for(int i=n-2;i>=0;i--){
        while(pq.top().pos-i > k) pq.pop();
        keep[i]=A[i]+pq.top().cost;
        pq.push(Elec(keep[i],i));
    }
    printf("%d",keep[0]);
}
/*
7
3
1 4 2 6 2 4 2
10
4
2 1 4 3 2 1 5 1 2 3
*/
