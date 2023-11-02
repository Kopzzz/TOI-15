#include<cstdio>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;
struct compare{
    bool operator()(const int& n1,const int& n2){
        return n1>n2;
    };
};
int main(){
    priority_queue<int,vector<int>,compare>pq[51];
    int n,k,x,f,w;
    scanf("%d %d",&n,&k);
    int F[k],A[k];
    for(int i=0;i<k;i++)scanf("%d",&F[i]);
    for(int i=0;i<k;i++)scanf("%d",&A[i]);
    for(int i=0;i<k;i++)pq[F[i]].push(A[i]);
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d %d",&f,&w);
        int j=1;
        while(1){
            if(!pq[f].empty()){
                int temp=pq[f].top();
                printf("%d %d\n",f,temp);
                temp+=abs(f-w);
                pq[f].pop();
                pq[w].push(temp);
                break;
            }
            if(f+j<=n && !pq[f+j].empty()){
                int temp=pq[f+j].top();
                printf("%d %d\n",f+j,temp);
                temp+=abs(f-w)+j;
                pq[f+j].pop();
                pq[w].push(temp);
                break;
            }
            if(f-j>=1 && !pq[f-j].empty()){
                int temp=pq[f-j].top();
                printf("%d %d\n",f-j,temp);
                temp+=abs(f-w)+j;
                pq[f-j].pop();
                pq[w].push(temp);
                break;
            }
            j++;
        }
    }

}
/*
10 8
1 1 1 1 9 9 9 9
2 2 2 2 2 2 2 2
15
5 2
5 1
5 2
5 1
5 10
5 10
10 1
5 1
5 4
5 1
5 1
6 8
8 6
1 10
3 7
*/
