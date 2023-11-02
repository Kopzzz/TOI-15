#include<bits/stdc++.h>
using namespace std;
class Van{
public:
    int num,day;
    Van(int num,int day){
        this->num = num;
        this->day = day;
    }
};
struct compare{
    bool operator()(const Van& n1,const Van& n2){
        if(n1.day==n2.day) return n1.num>n2.num;
        else return n1.day>n2.day;
    }
};
int main(){
 //   ios_base::sync_with_stdio(0);cin.tie(0);
    int n,k,d,temp,num;
    priority_queue<Van,vector<Van>,compare> pq;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=k;i++) pq.push(Van(i,0));
    while(n--){
        scanf("%d",&d);
        temp=pq.top().day;
        num=pq.top().num;
        printf("%d\n",num);
        pq.pop();
        pq.push(Van(num,temp+d));
    }
}
