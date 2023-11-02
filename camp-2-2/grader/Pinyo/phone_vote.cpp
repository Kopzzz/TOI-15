#include<bits/stdc++.h>
using namespace std;
int a[11];
int main(){
    unordered_map<int,int> m(1000001);
    int n,c,k,num,s;
    scanf("%d %d %d",&n,&c,&k);
    while(n--){
        scanf("%d %d",&s,&num);
        if(m.find(s)==m.end()){
            m[s]=1;
            a[num]++;
            continue;
        }
        if(num<=0 || num>c){
            m.at(s)++;
            continue;
        }
        else{
            m.at(s)++;
            if(m.at(s)<=k){
                a[num]++;
            }
        }
    }
    for(int i=1;i<=c;i++) printf("%d\n",a[i]);
}
