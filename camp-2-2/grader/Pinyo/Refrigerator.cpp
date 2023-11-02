#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int> >pq;
    int N,T,day,temp;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        while(N--){
            scanf("%d",&day);
            pq.push(day);
        }
        day=0;
        while(day<pq.top()){
            temp=pq.top();
            pq.pop();
            pq.push(temp+1);
            day++;
        }
        printf("%d\n",day);
    }
}
