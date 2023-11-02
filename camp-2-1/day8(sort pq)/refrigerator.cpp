#include<cstdio>
#include<vector>
#include<queue>
using namespace std;

struct compare{
    bool operator()(const int& n1,const int& n2){
        return n1>n2;
    };
};
int main(){
    priority_queue<int,vector<int>,compare>pq;
    int t,n,time;
    scanf("%d",&t);
    while(t--){
        int day=0;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&time);
            pq.push(time);
        }
        while(day<pq.top()){
            pq.push(pq.top()+1);
            pq.pop();
            day++;
        }
        printf("%d\n",day);
    }
}
/*
2
2
3 2
4
4 4 4 100
*/
