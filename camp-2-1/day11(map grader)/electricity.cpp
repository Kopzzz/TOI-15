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
    }
};
struct compare{
    bool operator()(const Elec& n1,const Elec& n2){
        if(n1.cost!=n2.cost) return n1.cost>n2.cost;
        else return n1.pos<n2.pos;
    }
};
int main(){
    priority_queue<Elec,vector<Elec>,compare>pq;
    int n,k,x,keep=0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(i==1){
            pq.push(Elec(x,i));
            keep=x;
        }
        else if(i>1&&i<n){
            Elec temp = pq.top();
            keep = temp.cost;
            if(i-temp.pos>=k){
                pq.pop();
                pq.push(Elec(x+keep,i));
            }
            else pq.push(Elec(x+keep,i));
        }
        else if(i==n){
            Elec temp = pq.top();
            if(i-temp.pos>=k){
                pq.pop();
            }
            temp = pq.top();
            keep = temp.cost;
            keep+=x;
        }
     //   printf("%d\n",keep);
    }
    printf("%d",keep);
}
/*
7
3
1 4 2 6 2 4 2
*/
