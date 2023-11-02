#include <bits/stdc++.h>
using namespace std;
/*class Lift{
    int floor,used;
    lift(int floor,int used){
        this->floor=floor;
        this->used=used;
    }
};
*/
struct compare{
    bool operator()(const int& n1,const int& n2){
         return n1>n2;
    }
};
int main(){
    int N,K,f,T,t,up,down,temp;
    scanf("%d %d",&N,&K);
    int arr[K];
    vector<int> v[N+1];
    priority_queue<int,vector<int>,compare> pq[N+1];
    for(int i=0;i<K;i++)scanf("%d",&arr[i]);
    for(int i=0;i<K;i++){
        scanf("%d",&T);
        pq[arr[i]].push(T);
    }
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&f,&t);
        up=f;
        down=f;
        while(1){
            if(!pq[up].empty()){
                temp = pq[up].top();
                printf("%d %d\n",up,temp);
                pq[up].pop();
                pq[t].push(temp+(up-f)+abs(f-t));
                break;
            }
            if(!pq[down].empty()){
                temp = pq[down].top();
                printf("%d %d\n",down,temp);
                pq[down].pop();
                pq[t].push(temp+(f-down)+abs(f-t));
                break;
            }
            if(up<N) up++;
            if(down>1) down--;
        }
    }
}

