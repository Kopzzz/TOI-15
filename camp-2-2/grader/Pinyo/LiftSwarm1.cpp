#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,K,f,T,t,up,down;
    scanf("%d %d",&N,&K);
    vector<int> v[N+1];
    while(K--){
        scanf("%d",&f);
        v[f].push_back(1);
    }
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&f,&t);
        up=f;
        down=f;
        while(1){
            if(!v[up].empty()){
                printf("%d\n",up);
                v[up].pop_back();
                v[t].push_back(1);
                break;
            }
            if(!v[down].empty()){
                printf("%d\n",down);
                v[down].pop_back();
                v[t].push_back(1);
                break;
            }
            if(up<N) up++;
            if(down>1) down--;
        }
    }
}
