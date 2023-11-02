#include<bits/stdc++.h>
using namespace std;
class Number{
public:
    int num,pos;
    Number(int num,int pos){
        this->num=num;
        this->pos=pos;
    }
};
struct compare{
    bool operator()(const Number& n1,const Number& n2){
        return n1.num<n2.num;
    }
}compare;
int main(){
    int N,num;
    scanf("%d",&N);
    vector<Number> v;
    for(int i=0;i<N;i++){
        scanf("%d",&num);
        v.push_back(Number(num,i));
    }
    sort(v.begin(),v.end(),compare);
    v.push_back(Number(-2,-1));
    int cur=-1,maxI,minI,maxP,minP;
    for(int i=0;i<N;i++){
        Number n=v[i];
        if(cur!=n.num){
            cur=n.num;
            maxI=minI=i;
            minP=maxP=n.pos;
        }
        else{
            maxI=i;
            minP=min(minP,n.pos);
            maxP=max(maxP,n.pos);
        }
        if(v[i+1].num!=cur){
            int dif1 = abs(minI-maxP);
            int dif2 = abs(maxI-minP);
            printf("%d %d\n",cur,max(dif1,dif2));
        }
    }
}

