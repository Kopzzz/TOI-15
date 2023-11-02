#include<bits/stdc++.h>
using namespace std;
int n,mn=2000000;
typedef pair<int,int> pii;
vector<pii> v[100000],path,temp;
queue<vector<pii> > q;
bool ch,visit[101];
int isNotVisited(int x, vector<pii>& path)
{
    int size = path.size();
    for (int i = 0; i < size; i++)
        if (path[i].first == x)
            return 0;
    return 1;
}
void BFS(int node){
    path.push_back(pii(1,0));
    q.push(path);
   // visit[node]=1;
    while(!q.empty()){
        path=q.front();
        q.pop();
        int last = path[path.size() - 1].first;
        int sum=path[path.size() - 1].second;
        if(last==n){
            ch=1;
            if(sum<mn){
                mn=sum;
                temp =path;
            }
            if(sum==mn && path.size()<temp.size()){
                mn=sum;
                temp =path;
            }
        }
        for(int i=0;i<v[last].size();i++){
            if (isNotVisited(v[last][i].first, path) && v[last][i].first!=last){
                vector<pii> newpath(path);
                newpath.push_back(pii(v[last][i].first,v[last][i].second+sum));
                q.push(newpath);
            }
        }
    }
}
int main(){
    int m,a,b,w;
    scanf("%d %d",&n,&m);
    while(m--){
        scanf("%d %d %d",&a,&b,&w);
        v[a].push_back(pii(b,w));
    }
    BFS(1);
    if(ch==0) printf("-1");
    else for(auto& it:temp) printf("%d ",it.first);
}
