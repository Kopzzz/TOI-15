#include<bits/stdc++.h>
using namespace std;
long power[50001],sum;
vector<int> v[50001];
queue<int> q;
void BFS(int node){
    sum=0;
    q.push(node);
    while(!q.empty()){
        int n=q.front();
        q.pop();
        sum+=power[n];
        for(int i=0;i<v[n].size();i++) q.push(v[n][i]);
    }
 }
void Delete(int node){
  //  if(power[node]==0) return;
    q.push(node);
    while(!q.empty()){
        int n=q.front();
        q.pop();
        power[n]=0;
        for(int i=0;i<v[n].size();i++){
            q.push(v[n][i]);
            power[v[n][i]]=0;
        }
    }
 }
int main(){
    int n,k,p,l,r,b;
    char a;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d %d %d",&p,&l,&r);
        power[i]=p;
        if(l>0)v[i].push_back(l);
        if(r>0)v[i].push_back(r);
    }
 //   for(int i=1;i<=n;i++) printf("%d ",v[i].size());
    for(int i=1;i<=k;i++){
        scanf("%s %d",&a,&b);
        if(a=='a'){
            BFS(b);
            printf("%ld\n",sum);
        }
        if(a=='d'){
            Delete(b);
        }
    }
}
