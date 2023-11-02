#include <bits/stdc++.h>
using namespace std;
typedef pair<pair<int,int>,pair<int,int> > pai;
typedef pair<int,int> pii;
int m,n,arr[151][151],mn=1000000,bomb=0,rE,cE,arr2[151][151];
queue<pai> q;
void BFS(int rS,int cS){
    q.push(pai(pii(rS,cS),pii(1,1)));
    while(!q.empty()){
        int r=q.front().first.first, c=q.front().first.second;
        int walk=q.front().second.first,re=q.front().second.second;
        q.pop();
        arr2[r][c]=1;
        if(r==rE && c==cE){
            if(walk<mn) mn=walk;
            if(re==-1) bomb++;
            printf("555\n");

        }
        if(r+1<=m && arr2[r+1][c]==0){
            if(arr[r+1][c]>0) q.push(pai(pii(r+1,c),pii(walk+1,re)));
            if(arr[r+1][c]==-1 && re>0){
                if(re==1) re=0;
                q.push(pai(pii(r+1,c),pii(walk+1,re)));
            }
            else if(arr[r+1][c]==0 && re>0){
                if(re==1) re=-1;
                arr[r+1][c]=-1;
                q.push(pai(pii(r+1,c),pii(walk+1,re)));
            }
        }
        if(r-1>0 && arr2[r-1][c]==0){
            if(arr[r-1][c]>0) q.push(pai(pii(r-1,c),pii(walk+1,re)));
            if(arr[r-1][c]==-1 && re>0){
                if(re==1) re=0;
                q.push(pai(pii(r-1,c),pii(walk+1,re)));
            }
            else if(arr[r-1][c]==0 && re>0){
                if(re==1) re=-1;
                arr[r-1][c]=-1;
                q.push(pai(pii(r-1,c),pii(walk+1,re)));
            }
        }
        if(c+1<=n && arr2[r][c+1]==0){
            if(arr[r][c+1]>0) q.push(pai(pii(r,c+1),pii(walk+1,re)));
            if(arr[r][c+1]==-1 && re>0){
                if(re==1) re=0;
                q.push(pai(pii(r,c+1),pii(walk+1,re)));
            }
            else if(arr[r][c+1]==0 && re>0){
                if(re==1) re=-1;
                arr[r][c+1]=-1;
                q.push(pai(pii(r,c+1),pii(walk+1,re)));
            }
        }
        if(c-1>0 && arr2[r][c-1]==0){
            if(arr[r][c-1]>0) q.push(pai(pii(r,c-1),pii(walk+1,re)));
            if(arr[r][c-1]==-1 && re>0){
                if(re==1) re=0;
                q.push(pai(pii(r,c-1),pii(walk+1,re)));
            }
            else if(arr[r][c-1]==0 && re>0){
                if(re==1) re=-1;
                arr[r][c-1]=-1;
                q.push(pai(pii(r,c-1),pii(walk+1,re)));
            }
        }

    printf("\n");
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    }
}
int main(){
    int rS,cS;
    scanf("%d %d %d %d %d %d",&m,&n,&rS,&cS,&rE,&cE);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    BFS(rS,cS);
    printf("%d\n%d",bomb,mn);
}


