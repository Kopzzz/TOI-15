/*
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
bool compare(const pii& n1,const pii& n2){
    if(n1.second==n2.second) return n1.first<n2.first;
    else return n1.second>n2.second;
}

int main(){
    long N,Q,num,sum=0,re;
    vector<pii> v;
    scanf("%ld %ld",&N,&Q);
    for(int i=0;i<N;i++){
        scanf("%ld",&num);
        sum+=num;
        v.push_back(pii(sum,i+1));
    }
    sort(v.begin(),v.end(),compare);
    while(Q--){
        scanf("%ld",&re);
        bool ch=0;
        for(int i=0;i<N;i++){
            if(re>=v[i].first) {
                printf("%ld\n",v[i].second);
                ch=1;
                break;
            }
        }
        if(ch==0) printf("0\n");
    }
}
*/

#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
bool compare1(const pii& n1,const pii& n2){
    return n1.first<n2.first;
}
bool compare2(const pii& n1,const pii& n2){
    return n1.second>n2.second;
}
int main(){
    long N,Q,num,sum=0,re,mn=2000000000;
    vector<pii> v;
  //  vector<pii>::iterator it;
    scanf("%ld %ld",&N,&Q);
    for(int i=0;i<N;i++){
        scanf("%ld",&num);
        sum+=num;
        if(sum<=mn) mn=sum;
        v.push_back(pii(sum,i+1));
    }
    sort(v.begin(),v.end(),compare1);
    for(int i=1;i<N;i++){
        if(v[i].first==v[i-1].first){
            if(v[i].second>v[i-1].second)v[i-1].second=-1;
            else v[i].second=-1;
        }
    }
    sort(v.begin(),v.end(),compare2);
    while(Q--){
        scanf("%ld",&re);
        if(re<mn){
            printf("0\n");
            continue;
        }
        for(int i=0;i<N;i++){
            if(re>=v[i].first){
                printf("%d\n",v[i].second);
                break;
            }
        }
    }
}

