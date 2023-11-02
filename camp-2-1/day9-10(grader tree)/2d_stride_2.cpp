#include<list>
#include<iostream>
using namespace std;
main(){
    int n,k,count=0,keep1,keep2;
    cin>>n>>k;
    list<int> l1,l2;
    for(int i=1;i<=n;i++)l1.push_back(i%10);
    for(int i=1;i<=n;i++)l2.push_front(i%10);
    for(auto& it:l1)cout<<it<<" ";
    cout<<endl;
    keep2=l2.back();
    l2.pop_back();
    l2.push_front(keep2);
    for(int i=1;i<n;i++){
        keep1=l1.back();
        keep2=l2.back();
        l1.pop_back();
        l1.push_front(keep1);
        l2.pop_back();
        l2.push_front(keep2);
        if(i%k==0)count++;
        if(count%2==0){
            for(auto& it:l1)cout<<it<<" ";
            cout<<endl;
        }
        else{
            for(auto& it:l2)cout<<it<<" ";
            cout<<endl;
        }
    }
}
